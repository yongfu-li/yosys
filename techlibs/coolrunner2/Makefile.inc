
OBJS += techlibs/coolrunner2/synth_coolrunner2.o
OBJS += techlibs/coolrunner2/coolrunner2_sop.o

$(eval $(call add_share_file,share/coolrunner2,techlibs/coolrunner2/cells_latch.v))
$(eval $(call add_share_file,share/coolrunner2,techlibs/coolrunner2/cells_sim.v))
$(eval $(call add_share_file,share/coolrunner2,techlibs/coolrunner2/xc2_dff.lib))
