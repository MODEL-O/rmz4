@ FUN_080e97b4  entry 0x080e97b4  size 178
.thumb
.org 0xe97b4
FUN_080e97b4:
	push {r4, r5, r6, r7, lr}	@ 000e97b4 f0b5
.org 0xe97b6
	sub sp, #8	@ 000e97b6 82b0
.org 0xe97b8
	adds r7, r0, #0	@ 000e97b8 071c
.org 0xe97ba
	ldr r0, [r7, #84]	@ 000e97ba 786d
.org 0xe97bc
	ldr r6, [pc, #128]	@ 000e97bc 204e
.org 0xe97be
	adds r0, r0, r6	@ 000e97be 8019
.org 0xe97c0
	str r0, [sp, #0]	@ 000e97c0 0090
.org 0xe97c2
	ldr r0, [r7, #88]	@ 000e97c2 b86d
.org 0xe97c4
	ldr r5, [pc, #124]	@ 000e97c4 1f4d
.org 0xe97c6
	adds r0, r0, r5	@ 000e97c6 4019
.org 0xe97c8
	str r0, [sp, #4]	@ 000e97c8 0190
.org 0xe97ca
	ldr r4, [pc, #124]	@ 000e97ca 1f4c
.org 0xe97cc
	mov r0, sp	@ 000e97cc 6846
.org 0xe97ce
	adds r1, r4, #0	@ 000e97ce 211c
.org 0xe97d0
	movs r2, #0	@ 000e97d0 0022
.org 0xe97d2
	movs r3, #0	@ 000e97d2 0023
.org 0xe97d4
	bl 0xd4c8c	@ 000e97d4 ebf75afa
.org 0xe97d8
	ldr r0, [r7, #84]	@ 000e97d8 786d
.org 0xe97da
	movs r1, #128	@ 000e97da 8021
.org 0xe97dc
	lsls r1, r1, #4	@ 000e97dc 0901
.org 0xe97de
	adds r0, r0, r1	@ 000e97de 4018
.org 0xe97e0
	str r0, [sp, #0]	@ 000e97e0 0090
.org 0xe97e2
	ldr r0, [r7, #88]	@ 000e97e2 b86d
.org 0xe97e4
	adds r0, r0, r5	@ 000e97e4 4019
.org 0xe97e6
	str r0, [sp, #4]	@ 000e97e6 0190
.org 0xe97e8
	adds r1, r4, #0	@ 000e97e8 211c
.org 0xe97ea
	adds r1, #28	@ 000e97ea 1c31
.org 0xe97ec
	mov r0, sp	@ 000e97ec 6846
.org 0xe97ee
	movs r2, #0	@ 000e97ee 0022
.org 0xe97f0
	movs r3, #0	@ 000e97f0 0023
.org 0xe97f2
	bl 0xd4c8c	@ 000e97f2 ebf74bfa
.org 0xe97f6
	ldr r0, [r7, #84]	@ 000e97f6 786d
.org 0xe97f8
	adds r0, r0, r6	@ 000e97f8 8019
.org 0xe97fa
	str r0, [sp, #0]	@ 000e97fa 0090
.org 0xe97fc
	ldr r0, [r7, #88]	@ 000e97fc b86d
.org 0xe97fe
	movs r1, #128	@ 000e97fe 8021
.org 0xe9800
	lsls r1, r1, #1	@ 000e9800 4900
.org 0xe9802
	adds r0, r0, r1	@ 000e9802 4018
.org 0xe9804
	str r0, [sp, #4]	@ 000e9804 0190
.org 0xe9806
	adds r4, #56	@ 000e9806 3834
.org 0xe9808
	mov r0, sp	@ 000e9808 6846
.org 0xe980a
	adds r1, r4, #0	@ 000e980a 211c
.org 0xe980c
	movs r2, #0	@ 000e980c 0022
.org 0xe980e
	movs r3, #0	@ 000e980e 0023
.org 0xe9810
	bl 0xd4c8c	@ 000e9810 ebf73cfa
.org 0xe9814
	ldr r0, [r7, #84]	@ 000e9814 786d
.org 0xe9816
	str r0, [sp, #0]	@ 000e9816 0090
.org 0xe9818
	ldr r0, [r7, #88]	@ 000e9818 b86d
.org 0xe981a
	ldr r1, [pc, #48]	@ 000e981a 0c49
.org 0xe981c
	adds r0, r0, r1	@ 000e981c 4018
.org 0xe981e
	str r0, [sp, #4]	@ 000e981e 0190
.org 0xe9820
	movs r0, #1	@ 000e9820 0120
.org 0xe9822
	mov r1, sp	@ 000e9822 6946
.org 0xe9824
	bl 0xd0c88	@ 000e9824 e7f730fa
.org 0xe9828
	ldr r0, [pc, #36]	@ 000e9828 0948
.org 0xe982a
	ldr r1, [pc, #40]	@ 000e982a 0a49
.org 0xe982c
	adds r0, r0, r1	@ 000e982c 4018
.org 0xe982e
	ldr r1, [r7, #88]	@ 000e982e b96d
.org 0xe9830
	ldr r0, [r0, #0]	@ 000e9830 0068
.org 0xe9832
	cmp r1, r0	@ 000e9832 8142
.org 0xe9834
	ble.n 0xe9858	@ 000e9834 10dd
.org 0xe9836
	movs r0, #49	@ 000e9836 3120
.org 0xe9838
	bl 0x2b10	@ 000e9838 19f76af9
.org 0xe983c
	b.n 0xe985e	@ 000e983c 0fe0
.org 0xe983e
	.byte 0x00	@ 000e983e data
.org 0xe983f
	.byte 0x00	@ 000e983f data
.org 0xe9840
	.byte 0x00,0xfc,0xff,0xff	@ 000e9840 data
.org 0xe9844
	.byte 0x00,0xf1,0xff,0xff	@ 000e9844 data
.org 0xe9848
	.byte 0x7c,0x94,0x86,0x08	@ 000e9848 data
.org 0xe984c
	.byte 0x00,0xf4,0xff,0xff	@ 000e984c data
.org 0xe9850
	.byte 0xb0,0x0a,0x00,0x02	@ 000e9850 data
.org 0xe9854
	.byte 0x0c,0xc0,0x02,0x00	@ 000e9854 data
.org 0xe9858
	movs r0, #42	@ 000e9858 2a20
.org 0xe985a
	bl 0x2b10	@ 000e985a 19f759f9
.org 0xe985e
	ldrb r1, [r7, #10]	@ 000e985e b97a
.org 0xe9860
	movs r0, #254	@ 000e9860 fe20
.org 0xe9862
	ands r0, r1	@ 000e9862 0840
.org 0xe9864
	strb r0, [r7, #10]	@ 000e9864 b872
