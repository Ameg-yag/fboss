# CMake to build libraries and binaries in fboss/agent/hw/bcm

# In general, libraries and binaries in fboss/foo/bar are built by
# cmake/FooBar.cmake

add_library(hw_tx_slow_path_rate
  fboss/agent/hw/benchmarks/HwTxSlowPathBenchmark.cpp
)

target_link_libraries(hw_tx_slow_path_rate
  config_factory
  hw_packet_utils
  ecmp_helper
  Folly::folly
)

add_library(hw_warm_boot_exit_speed
  fboss/agent/hw/benchmarks/HwWarmbootExitBenchmark.cpp
)

target_link_libraries(hw_warm_boot_exit_speed
  config_factory
  hw_switch_ensemble
  route_scale_gen
  Folly::folly
)

add_library(hw_stats_collection_speed
  fboss/agent/hw/benchmarks/HwStatsCollectionBenchmark.cpp
)

target_link_libraries(hw_stats_collection_speed
  config_factory
  hw_packet_utils
  ecmp_helper
  hw_benchmark_main
  Folly::folly
  Folly::follybenchmark
)

add_library(hw_fsw_scale_route_add_speed
  fboss/agent/hw/benchmarks/HwFswScaleRouteAddBenchmark.cpp
)

target_link_libraries(hw_fsw_scale_route_add_speed
  config_factory
  hw_packet_utils
  ecmp_helper
  hw_benchmark_main
  Folly::folly
)

add_library(hw_fsw_scale_route_del_speed
  fboss/agent/hw/benchmarks/HwFswScaleRouteDelBenchmark.cpp
)

target_link_libraries(hw_fsw_scale_route_del_speed
  config_factory
  hw_packet_utils
  ecmp_helper
  hw_benchmark_main
  Folly::folly
)

add_library(hw_th_alpm_scale_route_add_speed
  fboss/agent/hw/benchmarks/HwThAlpmScaleRouteAddBenchmark.cpp
)

target_link_libraries(hw_th_alpm_scale_route_add_speed
  config_factory
  hw_packet_utils
  ecmp_helper
  hw_benchmark_main
  Folly::folly
)

add_library(hw_th_alpm_scale_route_del_speed
  fboss/agent/hw/benchmarks/HwThAlpmScaleRouteDelBenchmark.cpp
)

target_link_libraries(hw_th_alpm_scale_route_del_speed
  config_factory
  hw_packet_utils
  ecmp_helper
  hw_benchmark_main
  Folly::folly
)

add_library(hw_hgrid_du_scale_route_add_speed
  fboss/agent/hw/benchmarks/HwHgridDUScaleRouteAddBenchmark.cpp
)

target_link_libraries(hw_hgrid_du_scale_route_add_speed
  config_factory
  hw_packet_utils
  ecmp_helper
  hw_benchmark_main
  Folly::folly
)

add_library(hw_hgrid_du_scale_route_del_speed
  fboss/agent/hw/benchmarks/HwHgridDUScaleRouteDelBenchmark.cpp
)

target_link_libraries(hw_hgrid_du_scale_route_del_speed
  config_factory
  hw_packet_utils
  ecmp_helper
  hw_benchmark_main
  Folly::folly
)

add_library(hw_hgrid_uu_scale_route_add_speed
  fboss/agent/hw/benchmarks/HwHgridUUScaleRouteAddBenchmark.cpp
)

target_link_libraries(hw_hgrid_uu_scale_route_add_speed
  config_factory
  hw_packet_utils
  ecmp_helper
  hw_benchmark_main
  Folly::folly
)

add_library(hw_hgrid_uu_scale_route_del_speed
  fboss/agent/hw/benchmarks/HwHgridUUScaleRouteDelBenchmark.cpp
)

target_link_libraries(hw_hgrid_uu_scale_route_del_speed
  config_factory
  hw_packet_utils
  ecmp_helper
  hw_benchmark_main
  Folly::folly
)

add_library(hw_ecmp_shrink_speed
  fboss/agent/hw/benchmarks/HwEcmpShrinkSpeedBenchmark.cpp
)

target_link_libraries(hw_ecmp_shrink_speed
  config_factory
  hw_packet_utils
  ecmp_helper
  hw_benchmark_main
  Folly::folly
)

add_library(hw_ecmp_shrink_with_competing_route_updates_speed
  fboss/agent/hw/benchmarks/HwEcmpShrinkWithCompetingRouteUpdatesBenchmark.cpp
)

target_link_libraries(hw_ecmp_shrink_with_competing_route_updates_speed
  route_distribution_gen
  config_factory
  hw_packet_utils
  ecmp_helper
  hw_benchmark_main
  Folly::folly
)
