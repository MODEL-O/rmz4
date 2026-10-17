@ FUN_08011fb0  entry 0x08011fb0  size 258
.thumb
.org 0x11fb0
FUN_08011fb0:
	push {r4, r5, r6, r7, lr}	@ 00011fb0 f0b5
.org 0x11fb2
	mov r7, r8	@ 00011fb2 4746
.org 0x11fb4
	push {r7}	@ 00011fb4 80b4
.org 0x11fb6
	ldr r7, [pc, #252]	@ 00011fb6 3f4f
.org 0x11fb8
	ldr r1, [pc, #252]	@ 00011fb8 3f49
.org 0x11fba
	adds r0, r7, r1	@ 00011fba 7818
.org 0x11fbc
	ldrb r1, [r0, #0]	@ 00011fbc 0178
.org 0x11fbe
	movs r0, #15	@ 00011fbe 0f20
.org 0x11fc0
	ands r0, r1	@ 00011fc0 0840
.org 0x11fc2
	cmp r0, #3	@ 00011fc2 0328
.org 0x11fc4
	bne.n 0x120a8	@ 00011fc4 70d1
.org 0x11fc6
	ldr r1, [pc, #244]	@ 00011fc6 3d49
.org 0x11fc8
	adds r0, r7, r1	@ 00011fc8 7818
.org 0x11fca
	ldrh r1, [r0, #0]	@ 00011fca 0188
.org 0x11fcc
	lsrs r0, r1, #8	@ 00011fcc 080a
.org 0x11fce
	cmp r0, #6	@ 00011fce 0628
.org 0x11fd0
	bne.n 0x120a8	@ 00011fd0 6ad1
.org 0x11fd2
	movs r0, #255	@ 00011fd2 ff20
.org 0x11fd4
	ands r0, r1	@ 00011fd4 0840
.org 0x11fd6
	cmp r0, #1	@ 00011fd6 0128
.org 0x11fd8
	bne.n 0x120a8	@ 00011fd8 66d1
.org 0x11fda
	ldr r6, [pc, #228]	@ 00011fda 394e
.org 0x11fdc
	ldr r0, [pc, #228]	@ 00011fdc 3948
.org 0x11fde
	adds r4, r7, r0	@ 00011fde 3c18
.org 0x11fe0
	ldrb r0, [r4, #0]	@ 00011fe0 2078
.org 0x11fe2
	movs r1, #3	@ 00011fe2 0321
.org 0x11fe4
	bl 0x129120	@ 00011fe4 17f19cf8
.org 0x11fe8
	lsls r0, r0, #24	@ 00011fe8 0006
.org 0x11fea
	lsrs r0, r0, #24	@ 00011fea 000e
.org 0x11fec
	lsls r1, r0, #2	@ 00011fec 8100
.org 0x11fee
	adds r1, r1, r0	@ 00011fee 0918
.org 0x11ff0
	lsls r1, r1, #2	@ 00011ff0 8900
.org 0x11ff2
	ldr r5, [pc, #212]	@ 00011ff2 354d
.org 0x11ff4
	adds r1, r1, r5	@ 00011ff4 4919
.org 0x11ff6
	ldr r0, [r6, #0]	@ 00011ff6 3068
.org 0x11ff8
	adds r0, r0, r1	@ 00011ff8 4018
.org 0x11ffa
	movs r1, #128	@ 00011ffa 8021
.org 0x11ffc
	lsls r1, r1, #7	@ 00011ffc c901
.org 0x11ffe
	mov r8, r1	@ 00011ffe 8846
.org 0x12000
	bl 0x1ea4	@ 00012000 eff750ff
.org 0x12004
	ldrb r0, [r4, #0]	@ 00012004 2078
.org 0x12006
	movs r1, #3	@ 00012006 0321
.org 0x12008
	bl 0x129120	@ 00012008 17f18af8
.org 0x1200c
	lsls r0, r0, #24	@ 0001200c 0006
.org 0x1200e
	lsrs r0, r0, #24	@ 0001200e 000e
.org 0x12010
	lsls r1, r0, #2	@ 00012010 8100
.org 0x12012
	adds r1, r1, r0	@ 00012012 0918
.org 0x12014
	lsls r1, r1, #2	@ 00012014 8900
.org 0x12016
	adds r1, r1, r5	@ 00012016 4919
.org 0x12018
	ldr r0, [r6, #0]	@ 00012018 3068
.org 0x1201a
	adds r0, r0, r1	@ 0001201a 4018
.org 0x1201c
	adds r0, #12	@ 0001201c 0c30
.org 0x1201e
	movs r1, #0	@ 0001201e 0021
.org 0x12020
	bl 0x2208	@ 00012020 f0f7f2f8
.org 0x12024
	ldrb r0, [r4, #0]	@ 00012024 2078
.org 0x12026
	movs r1, #3	@ 00012026 0321
.org 0x12028
	bl 0x129120	@ 00012028 17f17af8
.org 0x1202c
	lsls r0, r0, #24	@ 0001202c 0006
.org 0x1202e
	lsrs r0, r0, #24	@ 0001202e 000e
.org 0x12030
	lsls r1, r0, #2	@ 00012030 8100
.org 0x12032
	adds r1, r1, r0	@ 00012032 0918
.org 0x12034
	lsls r1, r1, #2	@ 00012034 8900
.org 0x12036
	adds r5, #120	@ 00012036 7835
.org 0x12038
	adds r1, r1, r5	@ 00012038 4919
.org 0x1203a
	ldr r0, [r6, #0]	@ 0001203a 3068
.org 0x1203c
	adds r0, r0, r1	@ 0001203c 4018
.org 0x1203e
	mov r1, r8	@ 0001203e 4146
.org 0x12040
	bl 0x1ea4	@ 00012040 eff730ff
.org 0x12044
	ldrb r0, [r4, #0]	@ 00012044 2078
.org 0x12046
	movs r1, #3	@ 00012046 0321
.org 0x12048
	bl 0x129120	@ 00012048 17f16af8
.org 0x1204c
	lsls r0, r0, #24	@ 0001204c 0006
.org 0x1204e
	lsrs r0, r0, #24	@ 0001204e 000e
.org 0x12050
	lsls r1, r0, #2	@ 00012050 8100
.org 0x12052
	adds r1, r1, r0	@ 00012052 0918
.org 0x12054
	lsls r1, r1, #2	@ 00012054 8900
.org 0x12056
	adds r1, r1, r5	@ 00012056 4919
.org 0x12058
	ldr r0, [r6, #0]	@ 00012058 3068
.org 0x1205a
	adds r0, r0, r1	@ 0001205a 4018
.org 0x1205c
	adds r0, #12	@ 0001205c 0c30
.org 0x1205e
	movs r1, #0	@ 0001205e 0021
.org 0x12060
	bl 0x2208	@ 00012060 f0f7d2f8
.org 0x12064
	ldr r0, [pc, #100]	@ 00012064 1948
.org 0x12066
	adds r5, r7, r0	@ 00012066 3d18
.org 0x12068
	ldrb r0, [r5, #0]	@ 00012068 2878
.org 0x1206a
	movs r1, #6	@ 0001206a 0621
.org 0x1206c
	bl 0x129120	@ 0001206c 17f158f8
.org 0x12070
	lsls r0, r0, #24	@ 00012070 0006
.org 0x12072
	lsrs r0, r0, #24	@ 00012072 000e
.org 0x12074
	lsls r1, r0, #2	@ 00012074 8100
.org 0x12076
	adds r1, r1, r0	@ 00012076 0918
.org 0x12078
	lsls r1, r1, #2	@ 00012078 8900
.org 0x1207a
	ldr r4, [pc, #84]	@ 0001207a 154c
.org 0x1207c
	adds r1, r1, r4	@ 0001207c 0919
.org 0x1207e
	ldr r0, [r6, #0]	@ 0001207e 3068
.org 0x12080
	adds r0, r0, r1	@ 00012080 4018
.org 0x12082
	mov r1, r8	@ 00012082 4146
.org 0x12084
	bl 0x1ea4	@ 00012084 eff70eff
.org 0x12088
	ldrb r0, [r5, #0]	@ 00012088 2878
.org 0x1208a
	movs r1, #6	@ 0001208a 0621
.org 0x1208c
	bl 0x129120	@ 0001208c 17f148f8
.org 0x12090
	lsls r0, r0, #24	@ 00012090 0006
.org 0x12092
	lsrs r0, r0, #24	@ 00012092 000e
.org 0x12094
	lsls r1, r0, #2	@ 00012094 8100
.org 0x12096
	adds r1, r1, r0	@ 00012096 0918
.org 0x12098
	lsls r1, r1, #2	@ 00012098 8900
.org 0x1209a
	adds r1, r1, r4	@ 0001209a 0919
.org 0x1209c
	ldr r0, [r6, #0]	@ 0001209c 3068
.org 0x1209e
	adds r0, r0, r1	@ 0001209e 4018
.org 0x120a0
	adds r0, #12	@ 000120a0 0c30
.org 0x120a2
	movs r1, #0	@ 000120a2 0021
.org 0x120a4
	bl 0x2208	@ 000120a4 f0f7b0f8
.org 0x120a8
	pop {r3}	@ 000120a8 08bc
.org 0x120aa
	mov r8, r3	@ 000120aa 9846
.org 0x120ac
	pop {r4, r5, r6, r7}	@ 000120ac f0bc
.org 0x120ae
	pop {r0}	@ 000120ae 01bc
.org 0x120b0
	bx r0	@ 000120b0 0047
