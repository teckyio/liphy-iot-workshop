Pod::Spec.new do |spec|
  spec.name             = 'LightFlySDK'
  spec.version          = '1.0.0'
  spec.platform         = :ios, '8.0'
  spec.license          = { :type => 'Proprietary', :file => 'LICENSE.txt' }
  spec.source           = { :path => './' }
  spec.homepage         = 'https://lightfly.io'
  spec.authors          = { 'Jetcomm Technologies Limited' => 'info@lightfly.io' }
  spec.summary          = 'LightFly.io Starter SDK for iOS.'
  spec.preserve_paths   = 'LightFlySDK.framework'
  spec.source_files     = 'LightFlySDK.framework/Versions/A/Headers/**/*{.h,.hpp}'
  spec.public_header_files = 'LightFlySDK.framework/Versions/A/Headers/**/*{.h,.hpp}'
  spec.vendored_frameworks = 'LightFlySDK.framework'
  spec.header_dir       = 'LightFlySDK'
  spec.header_mappings_dir = 'LightFlySDK.framework/Versions/A/Headers/'
  spec.dependency       'OpenCV', '~> 3.0'
  spec.requires_arc     = true
end