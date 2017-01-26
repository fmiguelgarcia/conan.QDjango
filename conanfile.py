from conans import ConanFile

class QDjangoConan(ConanFile):
    name = "QDjango"
    version = "0.6.2"
    settings = "os", "compiler", "build_type", "arch"
    url = "https://github.com/jlaine/qdjango.git"
    license = "LGPL"
    generators = "qmake", "cmake", "gcc"
    folder_name = "qdjango"

    def source(self):
        self.run( "git clone %s %s" %  (self.url, self.folder_name))
        self.run( "cd %s && \
                git checkout tags/v0.6.2 -b 0.6.2" % self.folder_name)

    def build(self):
        self.run( "cd %s && \
                mkdir build && \
                cd build && \
                qmake CONFIG+=debug_and_release .. && \
                make" % self.folder_name )

    def package(self):
        self.copy( pattern="libqdjango-db.*", dst="lib", src="%s/build/src/db" % self.folder_name)
        self.copy( pattern="libqdjango-http.*", dst="lib", src="%s/build/src/http" % self.folder_name)
        self.copy( pattern="*.h", dst="include/db", src="%s/src/db" % self.folder_name)
        self.copy( pattern="*.h", dst="include/http", src="%s/src/http" % self.folder_name)
#        self.copy( pattern="*[!_p].h", dst="src", src="%s/src" % self.folder_name)

    def package_info(self):
        self.cpp_info.libs.extend(["qdjango-db","qdjango-http"])
        self.cpp_info.includedirs.extend([ 'include', 'include/db', 'include/http'])
