@ FUN_0810b708  entry 0x0810b708  size 74
.thumb
.org 0x10b708
FUN_0810b708:
	push {r4, r5, r6, r7, lr}	@ 0010b708 f0b5
.org 0x10b70a
	adds r6, r0, #0	@ 0010b70a 061c
.org 0x10b70c
	adds r7, r1, #0	@ 0010b70c 0f1c
.org 0x10b70e
	lsls r2, r2, #24	@ 0010b70e 1206
.org 0x10b710
	lsrs r5, r2, #24	@ 0010b710 150e
.org 0x10b712
	lsls r3, r3, #24	@ 0010b712 1b06
.org 0x10b714
	lsrs r4, r3, #24	@ 0010b714 1c0e
.org 0x10b716
	ldr r0, [pc, #60]	@ 0010b716 0f48
.org 0x10b718
	ldr r0, [r0, #0]	@ 0010b718 0068
.org 0x10b71a
	bl 0x5500	@ 0010b71a f9f6f1fe
.org 0x10b71e
	adds r3, r0, #0	@ 0010b71e 031c
.org 0x10b720
	cmp r3, #0	@ 0010b720 002b
.org 0x10b722
	beq.n 0x10b74c	@ 0010b722 13d0
.org 0x10b724
	adds r1, r3, #0	@ 0010b724 191c
.org 0x10b726
	adds r1, #37	@ 0010b726 2531
.org 0x10b728
	movs r2, #0	@ 0010b728 0022
.org 0x10b72a
	movs r0, #16	@ 0010b72a 1020
.org 0x10b72c
	strb r0, [r1, #0]	@ 0010b72c 0870
.org 0x10b72e
	ldr r1, [pc, #40]	@ 0010b72e 0a49
.org 0x10b730
	movs r0, #6	@ 0010b730 0620
.org 0x10b732
	strb r0, [r3, #9]	@ 0010b732 5872
.org 0x10b734
	ldr r0, [r1, #24]	@ 0010b734 8869
.org 0x10b736
	ldr r0, [r0, #0]	@ 0010b736 0068
.org 0x10b738
	str r0, [r3, #20]	@ 0010b738 5861
.org 0x10b73a
	movs r0, #0	@ 0010b73a 0020
.org 0x10b73c
	strh r2, [r3, #32]	@ 0010b73c 1a84
.org 0x10b73e
	adds r1, r3, #0	@ 0010b73e 191c
.org 0x10b740
	adds r1, #34	@ 0010b740 2231
.org 0x10b742
	strb r0, [r1, #0]	@ 0010b742 0870
.org 0x10b744
	str r6, [r3, #40]	@ 0010b744 9e62
.org 0x10b746
	str r7, [r3, #44]	@ 0010b746 df62
.org 0x10b748
	strb r5, [r3, #16]	@ 0010b748 1d74
.org 0x10b74a
	strb r4, [r3, #17]	@ 0010b74a 5c74
.org 0x10b74c
	pop {r4, r5, r6, r7}	@ 0010b74c f0bc
.org 0x10b74e
	pop {r0}	@ 0010b74e 01bc
.org 0x10b750
	bx r0	@ 0010b750 0047
