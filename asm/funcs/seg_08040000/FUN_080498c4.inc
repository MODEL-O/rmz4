@ FUN_080498c4  entry 0x080498c4  size 184
.thumb
.org 0x498c4
FUN_080498c4:
	push {r4, r5, r6, lr}	@ 000498c4 70b5
.org 0x498c6
	mov r6, r9	@ 000498c6 4e46
.org 0x498c8
	mov r5, r8	@ 000498c8 4546
.org 0x498ca
	push {r5, r6}	@ 000498ca 60b4
.org 0x498cc
	sub sp, #4	@ 000498cc 81b0
.org 0x498ce
	adds r4, r0, #0	@ 000498ce 041c
.org 0x498d0
	ldr r1, [pc, #168]	@ 000498d0 2a49
.org 0x498d2
	mov r0, sp	@ 000498d2 6846
.org 0x498d4
	movs r2, #3	@ 000498d4 0322
.org 0x498d6
	bl 0x129258	@ 000498d6 dff0bffc
.org 0x498da
	ldr r1, [pc, #164]	@ 000498da 2949
.org 0x498dc
	ldrb r0, [r4, #9]	@ 000498dc 607a
.org 0x498de
	lsls r0, r0, #2	@ 000498de 8000
.org 0x498e0
	adds r0, r0, r1	@ 000498e0 4018
.org 0x498e2
	movs r1, #1	@ 000498e2 0121
.org 0x498e4
	mov r8, r1	@ 000498e4 8846
.org 0x498e6
	str r1, [r4, #12]	@ 000498e6 e160
.org 0x498e8
	ldr r0, [r0, #0]	@ 000498e8 0068
.org 0x498ea
	movs r2, #4	@ 000498ea 0422
.org 0x498ec
	mov r9, r2	@ 000498ec 9146
.org 0x498ee
	ldr r0, [r0, #4]	@ 000498ee 4068
.org 0x498f0
	str r0, [r4, #20]	@ 000498f0 6061
.org 0x498f2
	adds r0, r4, #0	@ 000498f2 201c
.org 0x498f4
	bl 0x1cc9c	@ 000498f4 d3f7d2f9
.org 0x498f8
	adds r0, r4, #0	@ 000498f8 201c
.org 0x498fa
	bl 0x1ceec	@ 000498fa d3f7f7fa
.org 0x498fe
	ldrb r1, [r4, #10]	@ 000498fe a17a
.org 0x49900
	movs r0, #1	@ 00049900 0120
.org 0x49902
	movs r6, #0	@ 00049902 0026
.org 0x49904
	orrs r0, r1	@ 00049904 0843
.org 0x49906
	movs r1, #2	@ 00049906 0221
.org 0x49908
	orrs r0, r1	@ 00049908 0843
.org 0x4990a
	strb r0, [r4, #10]	@ 0004990a a072
.org 0x4990c
	ldr r1, [pc, #116]	@ 0004990c 1d49
.org 0x4990e
	adds r0, r4, #0	@ 0004990e 201c
.org 0x49910
	bl 0x1cf00	@ 00049910 d3f7f6fa
.org 0x49914
	ldrb r1, [r4, #10]	@ 00049914 a17a
.org 0x49916
	movs r0, #4	@ 00049916 0420
.org 0x49918
	orrs r0, r1	@ 00049918 0843
.org 0x4991a
	strb r0, [r4, #10]	@ 0004991a a072
.org 0x4991c
	adds r5, r4, #0	@ 0004991c 251c
.org 0x4991e
	adds r5, #116	@ 0004991e 7435
.org 0x49920
	ldr r1, [pc, #100]	@ 00049920 1949
.org 0x49922
	adds r2, r4, #0	@ 00049922 221c
.org 0x49924
	adds r2, #84	@ 00049924 5432
.org 0x49926
	adds r0, r5, #0	@ 00049926 281c
.org 0x49928
	movs r3, #1	@ 00049928 0123
.org 0x4992a
	bl 0x5760	@ 0004992a bbf719ff
.org 0x4992e
	str r4, [r5, #44]	@ 0004992e ec62
.org 0x49930
	str r6, [r5, #36]	@ 00049930 6e62
.org 0x49932
	ldr r1, [pc, #88]	@ 00049932 1649
.org 0x49934
	ldrb r0, [r4, #17]	@ 00049934 607c
.org 0x49936
	add r0, sp	@ 00049936 6844
.org 0x49938
	ldrb r0, [r0, #0]	@ 00049938 0078
.org 0x4993a
	adds r0, #64	@ 0004993a 4030
.org 0x4993c
	lsls r0, r0, #24	@ 0004993c 0006
.org 0x4993e
	lsrs r0, r0, #23	@ 0004993e c00d
.org 0x49940
	adds r0, r0, r1	@ 00049940 4018
.org 0x49942
	movs r2, #0	@ 00049942 0022
.org 0x49944
	ldrsh r0, [r0, r2]	@ 00049944 805e
.org 0x49946
	lsls r0, r0, #2	@ 00049946 8000
.org 0x49948
	str r0, [r4, #92]	@ 00049948 e065
.org 0x4994a
	ldrb r0, [r4, #17]	@ 0004994a 607c
.org 0x4994c
	add r0, sp	@ 0004994c 6844
.org 0x4994e
	ldrb r0, [r0, #0]	@ 0004994e 0078
.org 0x49950
	lsls r0, r0, #1	@ 00049950 4000
.org 0x49952
	adds r0, r0, r1	@ 00049952 4018
.org 0x49954
	movs r1, #0	@ 00049954 0021
.org 0x49956
	ldrsh r0, [r0, r1]	@ 00049956 405e
.org 0x49958
	lsls r0, r0, #2	@ 00049958 8000
.org 0x4995a
	str r0, [r4, #96]	@ 0004995a 2066
.org 0x4995c
	mov r2, r9	@ 0004995c 4a46
.org 0x4995e
	strb r2, [r4, #18]	@ 0004995e a274
.org 0x49960
	adds r0, r4, #0	@ 00049960 201c
.org 0x49962
	adds r0, #189	@ 00049962 bd30
.org 0x49964
	mov r1, r8	@ 00049964 4146
.org 0x49966
	strb r1, [r0, #0]	@ 00049966 0170
.org 0x49968
	adds r0, r4, #0	@ 00049968 201c
.org 0x4996a
	bl 0x497fc	@ 0004996a fff747ff
.org 0x4996e
	add sp, #4	@ 0004996e 01b0
.org 0x49970
	pop {r3, r4}	@ 00049970 18bc
.org 0x49972
	mov r8, r3	@ 00049972 9846
.org 0x49974
	mov r9, r4	@ 00049974 a146
.org 0x49976
	pop {r4, r5, r6}	@ 00049976 70bc
.org 0x49978
	pop {r0}	@ 00049978 01bc
.org 0x4997a
	bx r0	@ 0004997a 0047
