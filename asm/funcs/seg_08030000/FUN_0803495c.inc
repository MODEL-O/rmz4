@ FUN_0803495c  entry 0x0803495c  size 58
.thumb
.org 0x3495c
FUN_0803495c:
	push {r4, r5, lr}	@ 0003495c 30b5
.org 0x3495e
	adds r5, r0, #0	@ 0003495e 051c
.org 0x34960
	ldr r4, [pc, #52]	@ 00034960 0d4c
.org 0x34962
	adds r1, r4, #0	@ 00034962 211c
.org 0x34964
	bl 0x3a3b0	@ 00034964 05f024fd
.org 0x34968
	adds r0, r5, #0	@ 00034968 281c
.org 0x3496a
	adds r1, r4, #0	@ 0003496a 211c
.org 0x3496c
	bl 0x3a3f0	@ 0003496c 05f040fd
.org 0x34970
	ldr r1, [pc, #40]	@ 00034970 0a49
.org 0x34972
	adds r0, r5, r1	@ 00034972 6818
.org 0x34974
	ldrb r2, [r0, #0]	@ 00034974 0278
.org 0x34976
	cmp r2, #2	@ 00034976 022a
.org 0x34978
	bne.n 0x34990	@ 00034978 0ad1
.org 0x3497a
	ldr r0, [pc, #36]	@ 0003497a 0948
.org 0x3497c
	adds r1, r5, r0	@ 0003497c 2918
.org 0x3497e
	movs r0, #0	@ 0003497e 0020
.org 0x34980
	strb r2, [r1, #0]	@ 00034980 0a70
.org 0x34982
	movs r2, #129	@ 00034982 8122
.org 0x34984
	lsls r2, r2, #1	@ 00034984 5200
.org 0x34986
	adds r1, r5, r2	@ 00034986 a918
.org 0x34988
	strb r0, [r1, #0]	@ 00034988 0870
.org 0x3498a
	adds r0, r5, #0	@ 0003498a 281c
.org 0x3498c
	bl 0x349a4	@ 0003498c 00f00af8
.org 0x34990
	pop {r4, r5}	@ 00034990 30bc
.org 0x34992
	pop {r0}	@ 00034992 01bc
.org 0x34994
	bx r0	@ 00034994 0047
