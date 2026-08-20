from setuptools import find_packages
from setuptools import setup

setup(
    name='hiwin_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('hiwin_msgs', 'hiwin_msgs.*')),
)
