@ FUN_0811d9cc  entry 0x0811d9cc  size 32
.thumb
.org 0x11d9cc
FUN_0811d9cc:
	push {r4, lr}	@ 0011d9cc 10b5
.org 0x11d9ce
	adds r4, r0, #0	@ 0011d9ce 041c
.org 0x11d9d0
	ldr r1, [pc, #24]	@ 0011d9d0 0649
.org 0x11d9d2
	ldrb r0, [r4, #1]	@ 0011d9d2 6078
.org 0x11d9d4
	lsls r0, r0, #2	@ 0011d9d4 8000
.org 0x11d9d6
	adds r0, r0, r1	@ 0011d9d6 4018
.org 0x11d9d8
	ldr r1, [r0, #0]	@ 0011d9d8 0168
.org 0x11d9da
	adds r0, r4, #0	@ 0011d9da 201c
.org 0x11d9dc
	bl 0x128f80	@ 0011d9dc 0bf0d0fa
.org 0x11d9e0
	adds r0, r4, #0	@ 0011d9e0 201c
.org 0x11d9e2
	bl 0x11eacc	@ 0011d9e2 01f073f8
.org 0x11d9e6
	pop {r4}	@ 0011d9e6 10bc
.org 0x11d9e8
	pop {r0}	@ 0011d9e8 01bc
.org 0x11d9ea
	bx r0	@ 0011d9ea 0047
