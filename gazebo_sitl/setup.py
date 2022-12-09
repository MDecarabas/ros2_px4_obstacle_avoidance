from setuptools import setup

package_name = 'gazebo_sitl'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='decarabas',
    maintainer_email='codrea.eric@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'my_node = gazebo_sitl.my_node:main',
            'rrt_service = gazebo_sitl.rrt_service:main'
        ],
    },
)
