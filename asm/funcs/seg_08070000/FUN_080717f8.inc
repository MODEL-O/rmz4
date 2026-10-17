@ FUN_080717f8  entry 0x080717f8  size 278
.thumb
.org 0x717f8
FUN_080717f8:
	push {r4, r5, r6, r7, lr}	@ 000717f8 f0b5
.org 0x717fa
	mov r7, r8	@ 000717fa 4746
.org 0x717fc
	push {r7}	@ 000717fc 80b4
.org 0x717fe
	sub sp, #8	@ 000717fe 82b0
.org 0x71800
	adds r6, r0, #0	@ 00071800 061c
.org 0x71802
	ldrb r0, [r6, #15]	@ 00071802 f07b
.org 0x71804
	cmp r0, #0	@ 00071804 0028
.org 0x71806
	bne.n 0x71826	@ 00071806 0ed1
.org 0x71808
	movs r0, #148	@ 00071808 9420
.org 0x7180a
	lsls r0, r0, #1	@ 0007180a 4000
.org 0x7180c
	bl 0x2b10	@ 0007180c 91f780f9
.org 0x71810
	adds r0, r6, #0	@ 00071810 301c
.org 0x71812
	movs r1, #9	@ 00071812 0921
.org 0x71814
	bl 0x736c4	@ 00071814 01f056ff
.org 0x71818
	movs r0, #12	@ 00071818 0c20
.org 0x7181a
	strb r0, [r6, #18]	@ 0007181a b074
.org 0x7181c
	movs r0, #1	@ 0007181c 0120
.org 0x7181e
	strb r0, [r6, #19]	@ 0007181e f074
.org 0x71820
	ldrb r0, [r6, #15]	@ 00071820 f07b
.org 0x71822
	adds r0, #1	@ 00071822 0130
.org 0x71824
	strb r0, [r6, #15]	@ 00071824 f073
.org 0x71826
	adds r0, r6, #0	@ 00071826 301c
.org 0x71828
	bl 0x1cff0	@ 00071828 abf7e2fb
.org 0x7182c
	adds r0, r6, #0	@ 0007182c 301c
.org 0x7182e
	adds r0, #116	@ 0007182e 7430
.org 0x71830
	ldr r4, [pc, #220]	@ 00071830 374c
.org 0x71832
	ldr r3, [pc, #224]	@ 00071832 384b
.org 0x71834
	adds r1, r6, #0	@ 00071834 311c
.org 0x71836
	adds r1, #184	@ 00071836 b831
.org 0x71838
	ldrb r2, [r1, #0]	@ 00071838 0a78
.org 0x7183a
	lsls r1, r2, #1	@ 0007183a 5100
.org 0x7183c
	adds r1, r1, r3	@ 0007183c c918
.org 0x7183e
	ldrh r1, [r1, #0]	@ 0007183e 0988
.org 0x71840
	lsls r1, r1, #2	@ 00071840 8900
.org 0x71842
	adds r1, r1, r4	@ 00071842 0919
.org 0x71844
	adds r7, r6, #0	@ 00071844 371c
.org 0x71846
	adds r7, #113	@ 00071846 7137
.org 0x71848
	movs r5, #0	@ 00071848 0025
.org 0x7184a
	ldrsb r5, [r7, r5]	@ 0007184a 7d57
.org 0x7184c
	ldr r1, [r1, #0]	@ 0007184c 0968
.org 0x7184e
	lsls r3, r5, #2	@ 0007184e ab00
.org 0x71850
	adds r3, r3, r1	@ 00071850 5b18
.org 0x71852
	ldr r4, [pc, #196]	@ 00071852 314c
.org 0x71854
	adds r1, r6, #0	@ 00071854 311c
.org 0x71856
	adds r1, #185	@ 00071856 b931
.org 0x71858
	ldrb r1, [r1, #0]	@ 00071858 0978
.org 0x7185a
	lsls r1, r1, #2	@ 0007185a 8900
.org 0x7185c
	adds r1, r1, r4	@ 0007185c 0919
.org 0x7185e
	ldr r1, [r1, #0]	@ 0007185e 0968
.org 0x71860
	lsls r2, r2, #2	@ 00071860 9200
.org 0x71862
	adds r2, r2, r1	@ 00071862 5218
.org 0x71864
	ldr r1, [r2, #0]	@ 00071864 1168
.org 0x71866
	adds r1, r1, r5	@ 00071866 4919
.org 0x71868
	ldrb r1, [r1, #0]	@ 00071868 0978
.org 0x7186a
	lsls r2, r1, #1	@ 0007186a 4a00
.org 0x7186c
	adds r2, r2, r1	@ 0007186c 5218
.org 0x7186e
	lsls r2, r2, #3	@ 0007186e d200
.org 0x71870
	ldr r1, [r3, #0]	@ 00071870 1968
.org 0x71872
	adds r1, r1, r2	@ 00071872 8918
.org 0x71874
	bl 0x5784	@ 00071874 93f786ff
.org 0x71878
	ldrb r0, [r6, #18]	@ 00071878 b07c
.org 0x7187a
	cmp r0, #0	@ 0007187a 0028
.org 0x7187c
	beq.n 0x71882	@ 0007187c 01d0
.org 0x7187e
	subs r0, #1	@ 0007187e 0138
.org 0x71880
	strb r0, [r6, #18]	@ 00071880 b074
.org 0x71882
	ldrb r0, [r6, #19]	@ 00071882 f07c
.org 0x71884
	movs r1, #115	@ 00071884 7321
.org 0x71886
	adds r1, r1, r6	@ 00071886 8919
.org 0x71888
	mov r8, r1	@ 00071888 8846
.org 0x7188a
	cmp r0, #0	@ 0007188a 0028
.org 0x7188c
	beq.n 0x718ec	@ 0007188c 2ed0
.org 0x7188e
	movs r0, #0	@ 0007188e 0020
.org 0x71890
	ldrsb r0, [r7, r0]	@ 00071890 3856
.org 0x71892
	cmp r0, #1	@ 00071892 0128
.org 0x71894
	bne.n 0x718ec	@ 00071894 2ad1
.org 0x71896
	movs r4, #0	@ 00071896 0024
.org 0x71898
	mov r5, sp	@ 00071898 6d46
.org 0x7189a
	ldr r0, [r6, #84]	@ 0007189a 706d
.org 0x7189c
	ldr r1, [pc, #124]	@ 0007189c 1f49
.org 0x7189e
	adds r0, r0, r1	@ 0007189e 4018
.org 0x718a0
	str r0, [sp, #0]	@ 000718a0 0090
.org 0x718a2
	ldr r0, [r6, #88]	@ 000718a2 b06d
.org 0x718a4
	ldr r1, [pc, #120]	@ 000718a4 1e49
.org 0x718a6
	adds r0, r0, r1	@ 000718a6 4018
.org 0x718a8
	str r0, [r5, #4]	@ 000718a8 6860
.org 0x718aa
	lsls r2, r4, #24	@ 000718aa 2206
.org 0x718ac
	lsrs r2, r2, #24	@ 000718ac 120e
.org 0x718ae
	adds r0, r6, #0	@ 000718ae 301c
.org 0x718b0
	mov r1, sp	@ 000718b0 6946
.org 0x718b2
	movs r3, #0	@ 000718b2 0023
.org 0x718b4
	bl 0xc13e4	@ 000718b4 4ff096fd
.org 0x718b8
	adds r4, #1	@ 000718b8 0134
.org 0x718ba
	cmp r4, #2	@ 000718ba 022c
.org 0x718bc
	ble.n 0x7189a	@ 000718bc eddd
.org 0x718be
	movs r4, #0	@ 000718be 0024
.org 0x718c0
	mov r5, sp	@ 000718c0 6d46
.org 0x718c2
	ldr r0, [r6, #84]	@ 000718c2 706d
.org 0x718c4
	movs r1, #192	@ 000718c4 c021
.org 0x718c6
	lsls r1, r1, #5	@ 000718c6 4901
.org 0x718c8
	adds r0, r0, r1	@ 000718c8 4018
.org 0x718ca
	str r0, [sp, #0]	@ 000718ca 0090
.org 0x718cc
	ldr r0, [r6, #88]	@ 000718cc b06d
.org 0x718ce
	ldr r1, [pc, #80]	@ 000718ce 1449
.org 0x718d0
	adds r0, r0, r1	@ 000718d0 4018
.org 0x718d2
	str r0, [r5, #4]	@ 000718d2 6860
.org 0x718d4
	lsls r2, r4, #24	@ 000718d4 2206
.org 0x718d6
	lsrs r2, r2, #24	@ 000718d6 120e
.org 0x718d8
	adds r0, r6, #0	@ 000718d8 301c
.org 0x718da
	mov r1, sp	@ 000718da 6946
.org 0x718dc
	movs r3, #1	@ 000718dc 0123
.org 0x718de
	bl 0xc13e4	@ 000718de 4ff081fd
.org 0x718e2
	adds r4, #1	@ 000718e2 0134
.org 0x718e4
	cmp r4, #2	@ 000718e4 022c
.org 0x718e6
	ble.n 0x718c2	@ 000718e6 ecdd
.org 0x718e8
	movs r0, #0	@ 000718e8 0020
.org 0x718ea
	strb r0, [r6, #19]	@ 000718ea f074
.org 0x718ec
	mov r1, r8	@ 000718ec 4146
.org 0x718ee
	ldrb r0, [r1, #0]	@ 000718ee 0878
.org 0x718f0
	cmp r0, #3	@ 000718f0 0328
.org 0x718f2
	bne.n 0x71902	@ 000718f2 06d1
.org 0x718f4
	ldrb r1, [r6, #18]	@ 000718f4 b17c
.org 0x718f6
	cmp r1, #0	@ 000718f6 0029
.org 0x718f8
	bne.n 0x71902	@ 000718f8 03d1
.org 0x718fa
	ldrb r0, [r6, #14]	@ 000718fa b07b
.org 0x718fc
	adds r0, #1	@ 000718fc 0130
.org 0x718fe
	strb r0, [r6, #14]	@ 000718fe b073
.org 0x71900
	strb r1, [r6, #15]	@ 00071900 f173
.org 0x71902
	add sp, #8	@ 00071902 02b0
.org 0x71904
	pop {r3}	@ 00071904 08bc
.org 0x71906
	mov r8, r3	@ 00071906 9846
.org 0x71908
	pop {r4, r5, r6, r7}	@ 00071908 f0bc
.org 0x7190a
	pop {r0}	@ 0007190a 01bc
.org 0x7190c
	bx r0	@ 0007190c 0047
