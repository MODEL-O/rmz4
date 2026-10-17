@ FUN_080838f0  entry 0x080838f0  size 72
.thumb
.org 0x838f0
FUN_080838f0:
	push {r4, lr}	@ 000838f0 10b5
.org 0x838f2
	adds r4, r0, #0	@ 000838f2 041c
.org 0x838f4
	ldr r1, [pc, #48]	@ 000838f4 0c49
.org 0x838f6
	ldrb r0, [r4, #9]	@ 000838f6 607a
.org 0x838f8
	lsls r0, r0, #2	@ 000838f8 8000
.org 0x838fa
	adds r0, r0, r1	@ 000838fa 4018
.org 0x838fc
	movs r1, #1	@ 000838fc 0121
.org 0x838fe
	str r1, [r4, #12]	@ 000838fe e160
.org 0x83900
	ldr r0, [r0, #0]	@ 00083900 0068
.org 0x83902
	ldr r0, [r0, #4]	@ 00083902 4068
.org 0x83904
	str r0, [r4, #20]	@ 00083904 6061
.org 0x83906
	adds r0, r4, #0	@ 00083906 201c
.org 0x83908
	bl 0x1cc9c	@ 00083908 99f7c8f9
.org 0x8390c
	ldrb r1, [r4, #10]	@ 0008390c a17a
.org 0x8390e
	movs r0, #1	@ 0008390e 0120
.org 0x83910
	orrs r0, r1	@ 00083910 0843
.org 0x83912
	movs r1, #2	@ 00083912 0221
.org 0x83914
	orrs r0, r1	@ 00083914 0843
.org 0x83916
	strb r0, [r4, #10]	@ 00083916 a072
.org 0x83918
	ldrb r0, [r4, #16]	@ 00083918 207c
.org 0x8391a
	cmp r0, #0	@ 0008391a 0028
.org 0x8391c
	beq.n 0x8392c	@ 0008391c 06d0
.org 0x8391e
	adds r0, r4, #0	@ 0008391e 201c
.org 0x83920
	bl 0x83a78	@ 00083920 00f0aaf8
.org 0x83924
	b.n 0x83932	@ 00083924 05e0
.org 0x83926
	.byte 0x00	@ 00083926 data
.org 0x83927
	.byte 0x00	@ 00083927 data
.org 0x83928
	.byte 0x40,0xdb,0x85,0x08	@ 00083928 data
.org 0x8392c
	adds r0, r4, #0	@ 0008392c 201c
.org 0x8392e
	bl 0x83a10	@ 0008392e 00f06ff8
.org 0x83932
	adds r0, r4, #0	@ 00083932 201c
.org 0x83934
	bl 0x83940	@ 00083934 00f004f8
