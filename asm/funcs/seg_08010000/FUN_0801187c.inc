@ FUN_0801187c  entry 0x0801187c  size 32
.thumb
.org 0x1187c
FUN_0801187c:
	push {lr}	@ 0001187c 00b5
.org 0x1187e
	adds r0, #104	@ 0001187e 6830
.org 0x11880
	ldrh r1, [r0, #0]	@ 00011880 0188
.org 0x11882
	subs r1, #1	@ 00011882 0139
.org 0x11884
	strh r1, [r0, #0]	@ 00011884 0180
.org 0x11886
	lsls r1, r1, #16	@ 00011886 0904
.org 0x11888
	cmp r1, #0	@ 00011888 0029
.org 0x1188a
	bne.n 0x11898	@ 0001188a 05d1
.org 0x1188c
	ldr r1, [pc, #12]	@ 0001188c 0349
.org 0x1188e
	ldr r0, [pc, #16]	@ 0001188e 0448
.org 0x11890
	adds r1, r1, r0	@ 00011890 0918
.org 0x11892
	ldrb r0, [r1, #0]	@ 00011892 0878
.org 0x11894
	adds r0, #1	@ 00011894 0130
.org 0x11896
	strb r0, [r1, #0]	@ 00011896 0870
.org 0x11898
	pop {r0}	@ 00011898 01bc
.org 0x1189a
	bx r0	@ 0001189a 0047
