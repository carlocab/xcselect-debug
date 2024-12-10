ifdef POLICY
	CFLAGS += -DHOST_SDK_POLICY=XCSELECT_HOST_SDK_POLICY_$(POLICY)
endif

LDLIBS += -lxcselect

.PHONY: default
default: test-xcselect

.PHONY: test
test: default
	./test-xcselect

.PHONY: clean
clean:
	git clean -X --force .
