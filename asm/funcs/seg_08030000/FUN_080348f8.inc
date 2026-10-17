@ FUN_080348f8  entry 0x080348f8  size 40
.thumb
.org 0x348f8
FUN_080348f8:
	push {lr}	@ 000348f8 00b5
.org 0x348fa
	ldr r1, [pc, #36]	@ 000348fa 0949
.org 0x348fc
	adds r3, r0, r1	@ 000348fc 4318
.org 0x348fe
	ldrb r1, [r3, #0]	@ 000348fe 1978
.org 0x34900
	movs r2, #4	@ 00034900 0422
.org 0x34902
	orrs r1, r2	@ 00034902 1143
.org 0x34904
	movs r2, #2	@ 00034904 0222
.org 0x34906
	orrs r1, r2	@ 00034906 1143
.org 0x34908
	strb r1, [r3, #0]	@ 00034908 1970
.org 0x3490a
	ldr r2, [pc, #24]	@ 0003490a 064a
.org 0x3490c
	ldr r3, [pc, #24]	@ 0003490c 064b
.org 0x3490e
	adds r1, r0, r3	@ 0003490e c118
.org 0x34910
	ldrb r1, [r1, #0]	@ 00034910 0978
.org 0x34912
	lsls r1, r1, #2	@ 00034912 8900
.org 0x34914
	adds r1, r1, r2	@ 00034914 8918
.org 0x34916
	ldr r1, [r1, #0]	@ 00034916 0968
.org 0x34918
	bl 0x128f80	@ 00034918 f4f032fb
.org 0x3491c
	pop {r0}	@ 0003491c 01bc
.org 0x3491e
	bx r0	@ 0003491e 0047
