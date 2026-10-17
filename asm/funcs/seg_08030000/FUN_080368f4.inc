@ FUN_080368f4  entry 0x080368f4  size 36
.thumb
.org 0x368f4
FUN_080368f4:
	push {lr}	@ 000368f4 00b5
.org 0x368f6
	ldr r1, [pc, #32]	@ 000368f6 0849
.org 0x368f8
	adds r3, r0, r1	@ 000368f8 4318
.org 0x368fa
	ldrb r1, [r3, #0]	@ 000368fa 1978
.org 0x368fc
	movs r2, #4	@ 000368fc 0422
.org 0x368fe
	orrs r1, r2	@ 000368fe 1143
.org 0x36900
	strb r1, [r3, #0]	@ 00036900 1970
.org 0x36902
	ldr r2, [pc, #24]	@ 00036902 064a
.org 0x36904
	ldr r3, [pc, #24]	@ 00036904 064b
.org 0x36906
	adds r1, r0, r3	@ 00036906 c118
.org 0x36908
	ldrb r1, [r1, #0]	@ 00036908 0978
.org 0x3690a
	lsls r1, r1, #2	@ 0003690a 8900
.org 0x3690c
	adds r1, r1, r2	@ 0003690c 8918
.org 0x3690e
	ldr r1, [r1, #0]	@ 0003690e 0968
.org 0x36910
	bl 0x128f80	@ 00036910 f2f036fb
.org 0x36914
	pop {r0}	@ 00036914 01bc
.org 0x36916
	bx r0	@ 00036916 0047
