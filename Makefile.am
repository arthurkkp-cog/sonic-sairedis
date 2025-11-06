SUBDIRS = meta lib vslib proxylib pyext

if SYNCD
SUBDIRS += syncd saiplayer saidump saidiscovery saisdkdump saiasiccmp tests unittest
endif

ACLOCAL_AMFLAGS = -I m4

.PHONY: clangsa-analyze clangsa-clean

clangsa-analyze:
	@echo "Running Clang Static Analyzer..."
	@rm -rf /tmp/scan-build-reports
	@scan-build-14 --status-bugs -o /tmp/scan-build-reports \
		./configure --with-sai=vs --disable-python2 CXXFLAGS="-std=c++14" CFLAGS="" || true
	@scan-build-14 --status-bugs -o /tmp/scan-build-reports make -j$$(nproc) || true
	@echo "Analysis complete. Reports saved to /tmp/scan-build-reports/"
	@echo "To view reports, open /tmp/scan-build-reports/*/index.html in a browser"

clangsa-clean:
	@rm -rf /tmp/scan-build-reports
	@echo "Cleaned ClangSA reports"
