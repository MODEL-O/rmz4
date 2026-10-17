@ FUN_0800b970  entry 0x0800b970  size 816
.thumb
.org 0xb970
FUN_0800b970:
	push {r4, r5, r6, r7, lr}	@ 0000b970 f0b5
.org 0xb972
	mov r7, r9	@ 0000b972 4f46
.org 0xb974
	mov r6, r8	@ 0000b974 4646
.org 0xb976
	push {r6, r7}	@ 0000b976 c0b4
.org 0xb978
	mov r8, r0	@ 0000b978 8046
.org 0xb97a
	movs r4, #159	@ 0000b97a 9f24
.org 0xb97c
	movs r0, #160	@ 0000b97c a020
.org 0xb97e
	lsls r0, r0, #2	@ 0000b97e 8000
.org 0xb980
	bl 0xa70	@ 0000b980 f5f776f8
.org 0xb984
	mov ip, r0	@ 0000b984 8446
.org 0xb986
	cmp r0, #0	@ 0000b986 0028
.org 0xb988
	bne.n 0xb98c	@ 0000b988 00d1
.org 0xb98a
	b.n 0xbbea	@ 0000b98a 2ee1
.org 0xb98c
	ldr r2, [pc, #784]	@ 0000b98c c44a
.org 0xb98e
	movs r1, #186	@ 0000b98e ba21
.org 0xb990
	lsls r1, r1, #1	@ 0000b990 4900
.org 0xb992
	adds r0, r2, r1	@ 0000b992 5018
.org 0xb994
	mov r3, ip	@ 0000b994 6346
.org 0xb996
	str r3, [r0, #0]	@ 0000b996 0360
.org 0xb998
	movs r5, #188	@ 0000b998 bc25
.org 0xb99a
	lsls r5, r5, #1	@ 0000b99a 6d00
.org 0xb99c
	adds r1, r2, r5	@ 0000b99c 5119
.org 0xb99e
	mov r3, r8	@ 0000b99e 4346
.org 0xb9a0
	ldr r0, [r3, #92]	@ 0000b9a0 d86d
.org 0xb9a2
	lsrs r0, r0, #4	@ 0000b9a2 0009
.org 0xb9a4
	lsls r0, r0, #2	@ 0000b9a4 8000
.org 0xb9a6
	ldr r5, [pc, #764]	@ 0000b9a6 bf4d
.org 0xb9a8
	adds r0, r0, r5	@ 0000b9a8 4019
.org 0xb9aa
	str r0, [r1, #0]	@ 0000b9aa 0860
.org 0xb9ac
	movs r0, #190	@ 0000b9ac be20
.org 0xb9ae
	lsls r0, r0, #1	@ 0000b9ae 4000
.org 0xb9b0
	adds r1, r2, r0	@ 0000b9b0 1118
.org 0xb9b2
	ldr r0, [pc, #756]	@ 0000b9b2 bd48
.org 0xb9b4
	str r0, [r1, #0]	@ 0000b9b4 0860
.org 0xb9b6
	ldr r1, [r3, #52]	@ 0000b9b6 596b
.org 0xb9b8
	asrs r1, r1, #1	@ 0000b9b8 4910
.org 0xb9ba
	ldr r2, [pc, #752]	@ 0000b9ba bc4a
.org 0xb9bc
	ldr r3, [pc, #752]	@ 0000b9bc bc4b
.org 0xb9be
	adds r0, r2, r3	@ 0000b9be d018
.org 0xb9c0
	ldrh r0, [r0, #0]	@ 0000b9c0 0088
.org 0xb9c2
	lsrs r0, r0, #8	@ 0000b9c2 000a
.org 0xb9c4
	adds r1, r1, r0	@ 0000b9c4 0918
.org 0xb9c6
	lsls r1, r1, #16	@ 0000b9c6 0904
.org 0xb9c8
	lsrs r1, r1, #16	@ 0000b9c8 090c
.org 0xb9ca
	mov r5, r8	@ 0000b9ca 4546
.org 0xb9cc
	ldr r0, [r5, #56]	@ 0000b9cc a86b
.org 0xb9ce
	ldr r3, [pc, #740]	@ 0000b9ce b94b
.org 0xb9d0
	adds r0, r0, r3	@ 0000b9d0 c018
.org 0xb9d2
	lsls r0, r0, #16	@ 0000b9d2 0004
.org 0xb9d4
	lsrs r6, r0, #16	@ 0000b9d4 060c
.org 0xb9d6
	lsls r5, r6, #16	@ 0000b9d6 3504
.org 0xb9d8
	asrs r0, r5, #16	@ 0000b9d8 2814
.org 0xb9da
	adds r0, #159	@ 0000b9da 9f30
.org 0xb9dc
	mov r9, r2	@ 0000b9dc 9146
.org 0xb9de
	cmp r0, #224	@ 0000b9de e028
.org 0xb9e0
	ble.n 0xba00	@ 0000b9e0 0edd
.org 0xb9e2
	adds r2, r1, #0	@ 0000b9e2 0a1c
.org 0xb9e4
	movs r3, #159	@ 0000b9e4 9f23
.org 0xb9e6
	lsls r3, r3, #2	@ 0000b9e6 9b00
.org 0xb9e8
	add r3, ip	@ 0000b9e8 6344
.org 0xb9ea
	asrs r1, r5, #16	@ 0000b9ea 2914
.org 0xb9ec
	adds r0, r5, #0	@ 0000b9ec 281c
.org 0xb9ee
	orrs r0, r2	@ 0000b9ee 1043
.org 0xb9f0
	str r0, [r3, #0]	@ 0000b9f0 1860
.org 0xb9f2
	subs r3, #4	@ 0000b9f2 043b
.org 0xb9f4
	subs r4, #1	@ 0000b9f4 013c
.org 0xb9f6
	adds r1, r1, r4	@ 0000b9f6 0919
.org 0xb9f8
	cmp r1, #224	@ 0000b9f8 e029
.org 0xb9fa
	ble.n 0xba00	@ 0000b9fa 01dd
.org 0xb9fc
	cmp r4, #0	@ 0000b9fc 002c
.org 0xb9fe
	bge.n 0xb9ea	@ 0000b9fe f4da
.org 0xba00
	mov r5, r8	@ 0000ba00 4546
.org 0xba02
	ldr r1, [r5, #52]	@ 0000ba02 696b
.org 0xba04
	asrs r1, r1, #2	@ 0000ba04 8910
.org 0xba06
	ldr r0, [pc, #688]	@ 0000ba06 ac48
.org 0xba08
	add r0, r9	@ 0000ba08 4844
.org 0xba0a
	ldrh r0, [r0, #0]	@ 0000ba0a 0088
.org 0xba0c
	lsrs r0, r0, #8	@ 0000ba0c 000a
.org 0xba0e
	adds r1, r1, r0	@ 0000ba0e 0918
.org 0xba10
	lsls r1, r1, #16	@ 0000ba10 0904
.org 0xba12
	lsrs r1, r1, #16	@ 0000ba12 090c
.org 0xba14
	lsls r2, r6, #16	@ 0000ba14 3204
.org 0xba16
	asrs r0, r2, #16	@ 0000ba16 1014
.org 0xba18
	adds r0, r0, r4	@ 0000ba18 0019
.org 0xba1a
	adds r7, r2, #0	@ 0000ba1a 171c
.org 0xba1c
	cmp r0, #203	@ 0000ba1c cb28
.org 0xba1e
	ble.n 0xba42	@ 0000ba1e 10dd
.org 0xba20
	cmp r4, #0	@ 0000ba20 002c
.org 0xba22
	blt.n 0xba42	@ 0000ba22 0edb
.org 0xba24
	adds r5, r1, #0	@ 0000ba24 0d1c
.org 0xba26
	lsls r0, r4, #2	@ 0000ba26 a000
.org 0xba28
	mov r1, ip	@ 0000ba28 6146
.org 0xba2a
	adds r3, r0, r1	@ 0000ba2a 4318
.org 0xba2c
	asrs r1, r2, #16	@ 0000ba2c 1114
.org 0xba2e
	adds r0, r2, #0	@ 0000ba2e 101c
.org 0xba30
	orrs r0, r5	@ 0000ba30 2843
.org 0xba32
	str r0, [r3, #0]	@ 0000ba32 1860
.org 0xba34
	subs r3, #4	@ 0000ba34 043b
.org 0xba36
	subs r4, #1	@ 0000ba36 013c
.org 0xba38
	adds r1, r1, r4	@ 0000ba38 0919
.org 0xba3a
	cmp r1, #203	@ 0000ba3a cb29
.org 0xba3c
	ble.n 0xba42	@ 0000ba3c 01dd
.org 0xba3e
	cmp r4, #0	@ 0000ba3e 002c
.org 0xba40
	bge.n 0xba2c	@ 0000ba40 f4da
.org 0xba42
	mov r3, r8	@ 0000ba42 4346
.org 0xba44
	ldr r1, [r3, #52]	@ 0000ba44 596b
.org 0xba46
	asrs r1, r1, #4	@ 0000ba46 0911
.org 0xba48
	ldr r0, [pc, #624]	@ 0000ba48 9c48
.org 0xba4a
	add r0, r9	@ 0000ba4a 4844
.org 0xba4c
	ldrh r0, [r0, #0]	@ 0000ba4c 0088
.org 0xba4e
	lsrs r0, r0, #8	@ 0000ba4e 000a
.org 0xba50
	adds r1, r1, r0	@ 0000ba50 0918
.org 0xba52
	lsls r1, r1, #16	@ 0000ba52 0904
.org 0xba54
	lsrs r1, r1, #16	@ 0000ba54 090c
.org 0xba56
	adds r5, r7, #0	@ 0000ba56 3d1c
.org 0xba58
	asrs r0, r7, #16	@ 0000ba58 3814
.org 0xba5a
	adds r0, r0, r4	@ 0000ba5a 0019
.org 0xba5c
	cmp r0, #187	@ 0000ba5c bb28
.org 0xba5e
	ble.n 0xba82	@ 0000ba5e 10dd
.org 0xba60
	cmp r4, #0	@ 0000ba60 002c
.org 0xba62
	blt.n 0xba82	@ 0000ba62 0edb
.org 0xba64
	adds r6, r1, #0	@ 0000ba64 0e1c
.org 0xba66
	lsls r0, r4, #2	@ 0000ba66 a000
.org 0xba68
	mov r1, ip	@ 0000ba68 6146
.org 0xba6a
	adds r3, r0, r1	@ 0000ba6a 4318
.org 0xba6c
	asrs r1, r5, #16	@ 0000ba6c 2914
.org 0xba6e
	adds r0, r5, #0	@ 0000ba6e 281c
.org 0xba70
	orrs r0, r6	@ 0000ba70 3043
.org 0xba72
	str r0, [r3, #0]	@ 0000ba72 1860
.org 0xba74
	subs r3, #4	@ 0000ba74 043b
.org 0xba76
	subs r4, #1	@ 0000ba76 013c
.org 0xba78
	adds r1, r1, r4	@ 0000ba78 0919
.org 0xba7a
	cmp r1, #187	@ 0000ba7a bb29
.org 0xba7c
	ble.n 0xba82	@ 0000ba7c 01dd
.org 0xba7e
	cmp r4, #0	@ 0000ba7e 002c
.org 0xba80
	bge.n 0xba6c	@ 0000ba80 f4da
.org 0xba82
	mov r3, r8	@ 0000ba82 4346
.org 0xba84
	ldr r1, [r3, #52]	@ 0000ba84 596b
.org 0xba86
	asrs r1, r1, #5	@ 0000ba86 4911
.org 0xba88
	ldr r0, [pc, #564]	@ 0000ba88 8d48
.org 0xba8a
	add r0, r9	@ 0000ba8a 4844
.org 0xba8c
	ldrh r0, [r0, #0]	@ 0000ba8c 0088
.org 0xba8e
	lsrs r0, r0, #8	@ 0000ba8e 000a
.org 0xba90
	adds r1, r1, r0	@ 0000ba90 0918
.org 0xba92
	lsls r1, r1, #16	@ 0000ba92 0904
.org 0xba94
	lsrs r1, r1, #16	@ 0000ba94 090c
.org 0xba96
	adds r5, r7, #0	@ 0000ba96 3d1c
.org 0xba98
	asrs r0, r7, #16	@ 0000ba98 3814
.org 0xba9a
	adds r0, r0, r4	@ 0000ba9a 0019
.org 0xba9c
	cmp r0, #180	@ 0000ba9c b428
.org 0xba9e
	ble.n 0xbac2	@ 0000ba9e 10dd
.org 0xbaa0
	cmp r4, #0	@ 0000baa0 002c
.org 0xbaa2
	blt.n 0xbac2	@ 0000baa2 0edb
.org 0xbaa4
	adds r6, r1, #0	@ 0000baa4 0e1c
.org 0xbaa6
	lsls r0, r4, #2	@ 0000baa6 a000
.org 0xbaa8
	mov r1, ip	@ 0000baa8 6146
.org 0xbaaa
	adds r3, r0, r1	@ 0000baaa 4318
.org 0xbaac
	asrs r1, r5, #16	@ 0000baac 2914
.org 0xbaae
	adds r0, r5, #0	@ 0000baae 281c
.org 0xbab0
	orrs r0, r6	@ 0000bab0 3043
.org 0xbab2
	str r0, [r3, #0]	@ 0000bab2 1860
.org 0xbab4
	subs r3, #4	@ 0000bab4 043b
.org 0xbab6
	subs r4, #1	@ 0000bab6 013c
.org 0xbab8
	adds r1, r1, r4	@ 0000bab8 0919
.org 0xbaba
	cmp r1, #180	@ 0000baba b429
.org 0xbabc
	ble.n 0xbac2	@ 0000babc 01dd
.org 0xbabe
	cmp r4, #0	@ 0000babe 002c
.org 0xbac0
	bge.n 0xbaac	@ 0000bac0 f4da
.org 0xbac2
	mov r3, r8	@ 0000bac2 4346
.org 0xbac4
	ldr r1, [r3, #52]	@ 0000bac4 596b
.org 0xbac6
	asrs r1, r1, #5	@ 0000bac6 4911
.org 0xbac8
	ldr r0, [pc, #504]	@ 0000bac8 7e48
.org 0xbaca
	add r0, r9	@ 0000baca 4844
.org 0xbacc
	ldrh r0, [r0, #0]	@ 0000bacc 0088
.org 0xbace
	lsrs r0, r0, #8	@ 0000bace 000a
.org 0xbad0
	adds r1, r1, r0	@ 0000bad0 0918
.org 0xbad2
	lsls r1, r1, #16	@ 0000bad2 0904
.org 0xbad4
	lsrs r1, r1, #16	@ 0000bad4 090c
.org 0xbad6
	adds r5, r7, #0	@ 0000bad6 3d1c
.org 0xbad8
	asrs r0, r7, #16	@ 0000bad8 3814
.org 0xbada
	adds r0, r0, r4	@ 0000bada 0019
.org 0xbadc
	cmp r0, #175	@ 0000badc af28
.org 0xbade
	ble.n 0xbb02	@ 0000bade 10dd
.org 0xbae0
	cmp r4, #0	@ 0000bae0 002c
.org 0xbae2
	blt.n 0xbb02	@ 0000bae2 0edb
.org 0xbae4
	adds r6, r1, #0	@ 0000bae4 0e1c
.org 0xbae6
	lsls r0, r4, #2	@ 0000bae6 a000
.org 0xbae8
	mov r1, ip	@ 0000bae8 6146
.org 0xbaea
	adds r3, r0, r1	@ 0000baea 4318
.org 0xbaec
	asrs r1, r5, #16	@ 0000baec 2914
.org 0xbaee
	adds r0, r5, #0	@ 0000baee 281c
.org 0xbaf0
	orrs r0, r6	@ 0000baf0 3043
.org 0xbaf2
	str r0, [r3, #0]	@ 0000baf2 1860
.org 0xbaf4
	subs r3, #4	@ 0000baf4 043b
.org 0xbaf6
	subs r4, #1	@ 0000baf6 013c
.org 0xbaf8
	adds r1, r1, r4	@ 0000baf8 0919
.org 0xbafa
	cmp r1, #175	@ 0000bafa af29
.org 0xbafc
	ble.n 0xbb02	@ 0000bafc 01dd
.org 0xbafe
	cmp r4, #0	@ 0000bafe 002c
.org 0xbb00
	bge.n 0xbaec	@ 0000bb00 f4da
.org 0xbb02
	mov r3, r8	@ 0000bb02 4346
.org 0xbb04
	ldr r1, [r3, #52]	@ 0000bb04 596b
.org 0xbb06
	asrs r1, r1, #6	@ 0000bb06 8911
.org 0xbb08
	ldr r0, [pc, #444]	@ 0000bb08 6f48
.org 0xbb0a
	add r0, r9	@ 0000bb0a 4844
.org 0xbb0c
	ldrh r0, [r0, #0]	@ 0000bb0c 0088
.org 0xbb0e
	lsrs r0, r0, #8	@ 0000bb0e 000a
.org 0xbb10
	adds r1, r1, r0	@ 0000bb10 0918
.org 0xbb12
	lsls r1, r1, #16	@ 0000bb12 0904
.org 0xbb14
	lsrs r1, r1, #16	@ 0000bb14 090c
.org 0xbb16
	adds r5, r7, #0	@ 0000bb16 3d1c
.org 0xbb18
	asrs r0, r7, #16	@ 0000bb18 3814
.org 0xbb1a
	adds r0, r0, r4	@ 0000bb1a 0019
.org 0xbb1c
	cmp r0, #171	@ 0000bb1c ab28
.org 0xbb1e
	ble.n 0xbb42	@ 0000bb1e 10dd
.org 0xbb20
	cmp r4, #0	@ 0000bb20 002c
.org 0xbb22
	blt.n 0xbb42	@ 0000bb22 0edb
.org 0xbb24
	adds r6, r1, #0	@ 0000bb24 0e1c
.org 0xbb26
	lsls r0, r4, #2	@ 0000bb26 a000
.org 0xbb28
	mov r1, ip	@ 0000bb28 6146
.org 0xbb2a
	adds r3, r0, r1	@ 0000bb2a 4318
.org 0xbb2c
	asrs r1, r5, #16	@ 0000bb2c 2914
.org 0xbb2e
	adds r0, r5, #0	@ 0000bb2e 281c
.org 0xbb30
	orrs r0, r6	@ 0000bb30 3043
.org 0xbb32
	str r0, [r3, #0]	@ 0000bb32 1860
.org 0xbb34
	subs r3, #4	@ 0000bb34 043b
.org 0xbb36
	subs r4, #1	@ 0000bb36 013c
.org 0xbb38
	adds r1, r1, r4	@ 0000bb38 0919
.org 0xbb3a
	cmp r1, #171	@ 0000bb3a ab29
.org 0xbb3c
	ble.n 0xbb42	@ 0000bb3c 01dd
.org 0xbb3e
	cmp r4, #0	@ 0000bb3e 002c
.org 0xbb40
	bge.n 0xbb2c	@ 0000bb40 f4da
.org 0xbb42
	mov r3, r8	@ 0000bb42 4346
.org 0xbb44
	ldr r1, [r3, #52]	@ 0000bb44 596b
.org 0xbb46
	asrs r1, r1, #6	@ 0000bb46 8911
.org 0xbb48
	ldr r0, [pc, #384]	@ 0000bb48 6048
.org 0xbb4a
	add r0, r9	@ 0000bb4a 4844
.org 0xbb4c
	ldrh r0, [r0, #0]	@ 0000bb4c 0088
.org 0xbb4e
	lsrs r0, r0, #8	@ 0000bb4e 000a
.org 0xbb50
	adds r1, r1, r0	@ 0000bb50 0918
.org 0xbb52
	lsls r1, r1, #16	@ 0000bb52 0904
.org 0xbb54
	lsrs r1, r1, #16	@ 0000bb54 090c
.org 0xbb56
	adds r5, r7, #0	@ 0000bb56 3d1c
.org 0xbb58
	asrs r0, r7, #16	@ 0000bb58 3814
.org 0xbb5a
	adds r0, r0, r4	@ 0000bb5a 0019
.org 0xbb5c
	cmp r0, #167	@ 0000bb5c a728
.org 0xbb5e
	ble.n 0xbb82	@ 0000bb5e 10dd
.org 0xbb60
	cmp r4, #0	@ 0000bb60 002c
.org 0xbb62
	blt.n 0xbb82	@ 0000bb62 0edb
.org 0xbb64
	adds r6, r1, #0	@ 0000bb64 0e1c
.org 0xbb66
	lsls r0, r4, #2	@ 0000bb66 a000
.org 0xbb68
	mov r1, ip	@ 0000bb68 6146
.org 0xbb6a
	adds r3, r0, r1	@ 0000bb6a 4318
.org 0xbb6c
	asrs r1, r5, #16	@ 0000bb6c 2914
.org 0xbb6e
	adds r0, r5, #0	@ 0000bb6e 281c
.org 0xbb70
	orrs r0, r6	@ 0000bb70 3043
.org 0xbb72
	str r0, [r3, #0]	@ 0000bb72 1860
.org 0xbb74
	subs r3, #4	@ 0000bb74 043b
.org 0xbb76
	subs r4, #1	@ 0000bb76 013c
.org 0xbb78
	adds r1, r1, r4	@ 0000bb78 0919
.org 0xbb7a
	cmp r1, #167	@ 0000bb7a a729
.org 0xbb7c
	ble.n 0xbb82	@ 0000bb7c 01dd
.org 0xbb7e
	cmp r4, #0	@ 0000bb7e 002c
.org 0xbb80
	bge.n 0xbb6c	@ 0000bb80 f4da
.org 0xbb82
	mov r3, r8	@ 0000bb82 4346
.org 0xbb84
	ldr r1, [r3, #52]	@ 0000bb84 596b
.org 0xbb86
	asrs r1, r1, #7	@ 0000bb86 c911
.org 0xbb88
	ldr r0, [pc, #324]	@ 0000bb88 5148
.org 0xbb8a
	add r0, r9	@ 0000bb8a 4844
.org 0xbb8c
	ldrh r0, [r0, #0]	@ 0000bb8c 0088
.org 0xbb8e
	lsrs r0, r0, #8	@ 0000bb8e 000a
.org 0xbb90
	adds r1, r1, r0	@ 0000bb90 0918
.org 0xbb92
	lsls r1, r1, #16	@ 0000bb92 0904
.org 0xbb94
	lsrs r1, r1, #16	@ 0000bb94 090c
.org 0xbb96
	adds r5, r7, #0	@ 0000bb96 3d1c
.org 0xbb98
	asrs r0, r5, #16	@ 0000bb98 2814
.org 0xbb9a
	adds r0, r0, r4	@ 0000bb9a 0019
.org 0xbb9c
	cmp r0, #159	@ 0000bb9c 9f28
.org 0xbb9e
	ble.n 0xbbc2	@ 0000bb9e 10dd
.org 0xbba0
	cmp r4, #0	@ 0000bba0 002c
.org 0xbba2
	blt.n 0xbbc2	@ 0000bba2 0edb
.org 0xbba4
	adds r2, r1, #0	@ 0000bba4 0a1c
.org 0xbba6
	lsls r0, r4, #2	@ 0000bba6 a000
.org 0xbba8
	mov r1, ip	@ 0000bba8 6146
.org 0xbbaa
	adds r3, r0, r1	@ 0000bbaa 4318
.org 0xbbac
	asrs r1, r5, #16	@ 0000bbac 2914
.org 0xbbae
	adds r0, r5, #0	@ 0000bbae 281c
.org 0xbbb0
	orrs r0, r2	@ 0000bbb0 1043
.org 0xbbb2
	str r0, [r3, #0]	@ 0000bbb2 1860
.org 0xbbb4
	subs r3, #4	@ 0000bbb4 043b
.org 0xbbb6
	subs r4, #1	@ 0000bbb6 013c
.org 0xbbb8
	adds r1, r1, r4	@ 0000bbb8 0919
.org 0xbbba
	cmp r1, #159	@ 0000bbba 9f29
.org 0xbbbc
	ble.n 0xbbc2	@ 0000bbbc 01dd
.org 0xbbbe
	cmp r4, #0	@ 0000bbbe 002c
.org 0xbbc0
	bge.n 0xbbac	@ 0000bbc0 f4da
.org 0xbbc2
	cmp r4, #0	@ 0000bbc2 002c
.org 0xbbc4
	blt.n 0xbbea	@ 0000bbc4 11db
.org 0xbbc6
	movs r5, #0	@ 0000bbc6 0025
.org 0xbbc8
	lsls r0, r4, #16	@ 0000bbc8 2004
.org 0xbbca
	movs r1, #152	@ 0000bbca 9821
.org 0xbbcc
	lsls r1, r1, #16	@ 0000bbcc 0904
.org 0xbbce
	subs r1, r1, r0	@ 0000bbce 091a
.org 0xbbd0
	lsls r0, r4, #2	@ 0000bbd0 a000
.org 0xbbd2
	mov r3, ip	@ 0000bbd2 6346
.org 0xbbd4
	adds r2, r0, r3	@ 0000bbd4 c218
.org 0xbbd6
	movs r3, #128	@ 0000bbd6 8023
.org 0xbbd8
	lsls r3, r3, #9	@ 0000bbd8 5b02
.org 0xbbda
	adds r0, r1, #0	@ 0000bbda 081c
.org 0xbbdc
	orrs r0, r5	@ 0000bbdc 2843
.org 0xbbde
	str r0, [r2, #0]	@ 0000bbde 1060
.org 0xbbe0
	adds r1, r1, r3	@ 0000bbe0 c918
.org 0xbbe2
	subs r2, #4	@ 0000bbe2 043a
.org 0xbbe4
	subs r4, #1	@ 0000bbe4 013c
.org 0xbbe6
	cmp r4, #0	@ 0000bbe6 002c
.org 0xbbe8
	bge.n 0xbbda	@ 0000bbe8 f7da
.org 0xbbea
	ldr r0, [pc, #192]	@ 0000bbea 3048
.org 0xbbec
	ldr r5, [pc, #228]	@ 0000bbec 394d
.org 0xbbee
	adds r0, r0, r5	@ 0000bbee 4019
.org 0xbbf0
	ldrh r1, [r0, #0]	@ 0000bbf0 0188
.org 0xbbf2
	movs r0, #128	@ 0000bbf2 8020
.org 0xbbf4
	lsls r0, r0, #1	@ 0000bbf4 4000
.org 0xbbf6
	cmp r1, r0	@ 0000bbf6 8142
.org 0xbbf8
	beq.n 0xbc94	@ 0000bbf8 4cd0
.org 0xbbfa
	movs r4, #159	@ 0000bbfa 9f24
.org 0xbbfc
	adds r0, #64	@ 0000bbfc 4030
.org 0xbbfe
	bl 0xa70	@ 0000bbfe f4f737ff
.org 0xbc02
	adds r3, r0, #0	@ 0000bc02 031c
.org 0xbc04
	cmp r3, #0	@ 0000bc04 002b
.org 0xbc06
	beq.n 0xbc94	@ 0000bc06 45d0
.org 0xbc08
	ldr r2, [pc, #148]	@ 0000bc08 254a
.org 0xbc0a
	movs r1, #200	@ 0000bc0a c821
.org 0xbc0c
	lsls r1, r1, #1	@ 0000bc0c 4900
.org 0xbc0e
	adds r0, r2, r1	@ 0000bc0e 5018
.org 0xbc10
	str r3, [r0, #0]	@ 0000bc10 0360
.org 0xbc12
	movs r5, #202	@ 0000bc12 ca25
.org 0xbc14
	lsls r5, r5, #1	@ 0000bc14 6d00
.org 0xbc16
	adds r1, r2, r5	@ 0000bc16 5119
.org 0xbc18
	mov r5, r8	@ 0000bc18 4546
.org 0xbc1a
	ldr r0, [r5, #92]	@ 0000bc1a e86d
.org 0xbc1c
	lsrs r0, r0, #4	@ 0000bc1c 0009
.org 0xbc1e
	lsls r0, r0, #1	@ 0000bc1e 4000
.org 0xbc20
	ldr r5, [pc, #180]	@ 0000bc20 2d4d
.org 0xbc22
	adds r0, r0, r5	@ 0000bc22 4019
.org 0xbc24
	str r0, [r1, #0]	@ 0000bc24 0860
.org 0xbc26
	movs r0, #204	@ 0000bc26 cc20
.org 0xbc28
	lsls r0, r0, #1	@ 0000bc28 4000
.org 0xbc2a
	adds r1, r2, r0	@ 0000bc2a 1118
.org 0xbc2c
	ldr r0, [pc, #172]	@ 0000bc2c 2b48
.org 0xbc2e
	str r0, [r1, #0]	@ 0000bc2e 0860
.org 0xbc30
	mov r5, r8	@ 0000bc30 4546
.org 0xbc32
	ldr r1, [r5, #100]	@ 0000bc32 696e
.org 0xbc34
	movs r2, #71	@ 0000bc34 4722
.org 0xbc36
	adds r0, r1, #0	@ 0000bc36 081c
.org 0xbc38
	orrs r0, r2	@ 0000bc38 1043
.org 0xbc3a
	lsls r0, r0, #16	@ 0000bc3a 0004
.org 0xbc3c
	lsrs r7, r0, #16	@ 0000bc3c 070c
.org 0xbc3e
	movs r0, #69	@ 0000bc3e 4520
.org 0xbc40
	orrs r1, r0	@ 0000bc40 0143
.org 0xbc42
	lsls r1, r1, #16	@ 0000bc42 0904
.org 0xbc44
	lsrs r5, r1, #16	@ 0000bc44 0d0c
.org 0xbc46
	mov r1, r8	@ 0000bc46 4146
.org 0xbc48
	ldr r0, [r1, #56]	@ 0000bc48 886b
.org 0xbc4a
	ldr r1, [pc, #104]	@ 0000bc4a 1a49
.org 0xbc4c
	adds r0, r0, r1	@ 0000bc4c 4018
.org 0xbc4e
	lsls r0, r0, #16	@ 0000bc4e 0004
.org 0xbc50
	lsrs r6, r0, #16	@ 0000bc50 060c
.org 0xbc52
	mov r1, r8	@ 0000bc52 4146
.org 0xbc54
	ldrh r0, [r1, #16]	@ 0000bc54 088a
.org 0xbc56
	cmp r0, #0	@ 0000bc56 0028
.org 0xbc58
	beq.n 0xbc62	@ 0000bc58 03d0
.org 0xbc5a
	lsls r0, r6, #16	@ 0000bc5a 3004
.org 0xbc5c
	ldr r1, [pc, #128]	@ 0000bc5c 2049
.org 0xbc5e
	adds r0, r0, r1	@ 0000bc5e 4018
.org 0xbc60
	lsrs r6, r0, #16	@ 0000bc60 060c
.org 0xbc62
	lsls r0, r6, #16	@ 0000bc62 3004
.org 0xbc64
	asrs r1, r0, #16	@ 0000bc64 0114
.org 0xbc66
	adds r0, r1, #0	@ 0000bc66 081c
.org 0xbc68
	adds r0, #159	@ 0000bc68 9f30
.org 0xbc6a
	cmp r0, #203	@ 0000bc6a cb28
.org 0xbc6c
	ble.n 0xbc82	@ 0000bc6c 09dd
.org 0xbc6e
	lsls r0, r4, #1	@ 0000bc6e 6000
.org 0xbc70
	adds r2, r3, r0	@ 0000bc70 1a18
.org 0xbc72
	strh r5, [r2, #0]	@ 0000bc72 1580
.org 0xbc74
	subs r2, #2	@ 0000bc74 023a
.org 0xbc76
	subs r4, #1	@ 0000bc76 013c
.org 0xbc78
	adds r0, r1, r4	@ 0000bc78 0819
.org 0xbc7a
	cmp r0, #203	@ 0000bc7a cb28
.org 0xbc7c
	ble.n 0xbc82	@ 0000bc7c 01dd
.org 0xbc7e
	cmp r4, #0	@ 0000bc7e 002c
.org 0xbc80
	bge.n 0xbc72	@ 0000bc80 f7da
.org 0xbc82
	cmp r4, #0	@ 0000bc82 002c
.org 0xbc84
	blt.n 0xbc94	@ 0000bc84 06db
.org 0xbc86
	lsls r0, r4, #1	@ 0000bc86 6000
.org 0xbc88
	adds r0, r0, r3	@ 0000bc88 c018
.org 0xbc8a
	strh r7, [r0, #0]	@ 0000bc8a 0780
.org 0xbc8c
	subs r0, #2	@ 0000bc8c 0238
.org 0xbc8e
	subs r4, #1	@ 0000bc8e 013c
.org 0xbc90
	cmp r4, #0	@ 0000bc90 002c
.org 0xbc92
	bge.n 0xbc8a	@ 0000bc92 fada
.org 0xbc94
	pop {r3, r4}	@ 0000bc94 18bc
.org 0xbc96
	mov r8, r3	@ 0000bc96 9846
.org 0xbc98
	mov r9, r4	@ 0000bc98 a146
.org 0xbc9a
	pop {r4, r5, r6, r7}	@ 0000bc9a f0bc
.org 0xbc9c
	pop {r0}	@ 0000bc9c 01bc
.org 0xbc9e
	bx r0	@ 0000bc9e 0047
