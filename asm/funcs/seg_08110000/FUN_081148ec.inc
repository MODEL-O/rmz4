@ FUN_081148ec  entry 0x081148ec  size 74
.thumb
.org 0x1148ec
FUN_081148ec:
	push {r4, lr}	@ 001148ec 10b5
.org 0x1148ee
	adds r4, r0, #0	@ 001148ee 041c
.org 0x1148f0
	ldrb r0, [r4, #2]	@ 001148f0 a078
.org 0x1148f2
	cmp r0, #0	@ 001148f2 0028
.org 0x1148f4
	beq.n 0x1148fc	@ 001148f4 02d0
.org 0x1148f6
	cmp r0, #1	@ 001148f6 0128
.org 0x1148f8
	beq.n 0x114910	@ 001148f8 0ad0
.org 0x1148fa
	b.n 0x114930	@ 001148fa 19e0
.org 0x1148fc
	movs r0, #6	@ 001148fc 0620
.org 0x1148fe
	bl 0x2b10	@ 001148fe eef607f9
.org 0x114902
	movs r0, #225	@ 00114902 e120
.org 0x114904
	lsls r0, r0, #5	@ 00114904 4001
.org 0x114906
	strh r0, [r4, #4]	@ 00114906 a080
.org 0x114908
	ldrb r0, [r4, #2]	@ 00114908 a078
.org 0x11490a
	adds r0, #1	@ 0011490a 0130
.org 0x11490c
	strb r0, [r4, #2]	@ 0011490c a070
.org 0x11490e
	b.n 0x114930	@ 0011490e 0fe0
.org 0x114910
	ldrh r0, [r4, #4]	@ 00114910 a088
.org 0x114912
	subs r0, #1	@ 00114912 0138
.org 0x114914
	strh r0, [r4, #4]	@ 00114914 a080
.org 0x114916
	lsls r0, r0, #16	@ 00114916 0004
.org 0x114918
	cmp r0, #0	@ 00114918 0028
.org 0x11491a
	beq.n 0x114926	@ 0011491a 04d0
.org 0x11491c
	movs r0, #6	@ 0011491c 0620
.org 0x11491e
	bl 0x2bb4	@ 0011491e eef649f9
.org 0x114922
	cmp r0, #0	@ 00114922 0028
.org 0x114924
	bne.n 0x114930	@ 00114924 04d1
.org 0x114926
	movs r1, #192	@ 00114926 c021
.org 0x114928
	lsls r1, r1, #2	@ 00114928 8900
.org 0x11492a
	adds r0, r4, #0	@ 0011492a 201c
.org 0x11492c
	bl 0x1126ac	@ 0011492c fdf7befe
.org 0x114930
	pop {r4}	@ 00114930 10bc
.org 0x114932
	pop {r0}	@ 00114932 01bc
.org 0x114934
	bx r0	@ 00114934 0047
