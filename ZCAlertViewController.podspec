Pod::Spec.new do |s|
  s.name         = "ZCAlertViewController"
  s.version      = "0.0.3"
  s.summary      = "自定义弹框"
  s.homepage     = "https://github.com/xiaowu2016/ZCAlertViewController"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "zhangchao" => "942777491@qq.com" }
  s.source       = { :git => "https://github.com/xiaowu2016/ZCAlertViewController.git", :tag => "0.0.3"}
  s.public_header_files = "ZCAlertViewController/**/*.h"
  #s.public_header_files = 'ZCAlertViewController/{*}.h'
  s.preserve_paths = 'ZCAlertViewController/*.h'
  s.libraries = 'ZCAlertViewController'
  s.resources = "ZCAlertViewController/ZCSettings.bundle"
  s.vendored_libraries = 'lib/libZCAlertViewController.a'
  s.requires_arc = true
  s.platform = :ios,"7.0"
  s.xcconfig = { 'HEADER_SEARCH_PATHS' => "${PODS_ROOT}/#{s.name}/include/**", "LIBRARY_SEARCH_PATHS" => "${PODS_ROOT}/#{s.name}/lib/**" }
end
