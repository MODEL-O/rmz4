@ FUN_080eaabc  entry 0x080eaabc  size 38
.thumb
.org 0xeaabc
FUN_080eaabc:
	push {lr}	@ 000eaabc 00b5
.org 0xeaabe
	adds r2, r0, #0	@ 000eaabe 021c
.org 0xeaac0
	adds r1, r2, #0	@ 000eaac0 111c
.org 0xeaac2
	adds r1, #186	@ 000eaac2 ba31
.org 0xeaac4
	ldrh r0, [r1, #0]	@ 000eaac4 0888
.org 0xeaac6
	cmp r0, #0	@ 000eaac6 0028
.org 0xeaac8
	beq.n 0xeaace	@ 000eaac8 01d0
.org 0xeaaca
	subs r0, #1	@ 000eaaca 0138
.org 0xeaacc
	strh r0, [r1, #0]	@ 000eaacc 0880
.org 0xeaace
	ldr r0, [pc, #20]	@ 000eaace 0548
.org 0xeaad0
	ldrb r1, [r2, #13]	@ 000eaad0 517b
.org 0xeaad2
	lsls r1, r1, #2	@ 000eaad2 8900
.org 0xeaad4
	adds r1, r1, r0	@ 000eaad4 0918
.org 0xeaad6
	ldr r1, [r1, #0]	@ 000eaad6 0968
.org 0xeaad8
	adds r0, r2, #0	@ 000eaad8 101c
.org 0xeaada
	bl 0x128f80	@ 000eaada 3ef051fa
.org 0xeaade
	pop {r0}	@ 000eaade 01bc
.org 0xeaae0
	bx r0	@ 000eaae0 0047
