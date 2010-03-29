from distutils.core import setup
from liquid import version

setup(
    name="liquid",
    version=version(),
    description="A small Desktop Environment written in python and PyQt.",
    author="Liquid Team",
    author_email="none_at_the_moment@hotmail.com",
    url="http://github.com/sobber//",
    packages=["liquid"],
    scripts=["bin/liquid"]
)

