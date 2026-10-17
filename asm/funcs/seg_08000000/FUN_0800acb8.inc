@ FUN_0800acb8  entry 0x0800acb8  size 800
.thumb
.org 0xacb8
FUN_0800acb8:
	push {r4, r5, r6, r7, lr}	@ 0000acb8 f0b5
.org 0xacba
	mov r7, sl	@ 0000acba 5746
.org 0xacbc
	mov r6, r9	@ 0000acbc 4e46
.org 0xacbe
	mov r5, r8	@ 0000acbe 4546
.org 0xacc0
	push {r5, r6, r7}	@ 0000acc0 e0b4
.org 0xacc2
	sub sp, #20	@ 0000acc2 85b0
.org 0xacc4
	mov r8, r0	@ 0000acc4 8046
.org 0xacc6
	movs r7, #159	@ 0000acc6 9f27
.org 0xacc8
	ldr r0, [pc, #688]	@ 0000acc8 ac48
.org 0xacca
	ldr r1, [pc, #692]	@ 0000acca ad49
.org 0xaccc
	adds r0, r0, r1	@ 0000accc 4018
.org 0xacce
	ldrh r0, [r0, #0]	@ 0000acce 0088
.org 0xacd0
	cmp r0, #0	@ 0000acd0 0028
.org 0xacd2
	beq.n 0xad20	@ 0000acd2 25d0
.org 0xacd4
	mov r2, r8	@ 0000acd4 4246
.org 0xacd6
	ldr r5, [r2, #92]	@ 0000acd6 d56d
.org 0xacd8
	lsls r5, r5, #16	@ 0000acd8 2d04
.org 0xacda
	ldr r0, [pc, #680]	@ 0000acda aa48
.org 0xacdc
	ldr r0, [r0, #0]	@ 0000acdc 0068
.org 0xacde
	ldr r3, [pc, #680]	@ 0000acde aa4b
.org 0xace0
	adds r0, r0, r3	@ 0000ace0 c018
.org 0xace2
	lsrs r5, r5, #20	@ 0000ace2 2d0d
.org 0xace4
	lsls r5, r5, #1	@ 0000ace4 6d00
.org 0xace6
	ldr r1, [pc, #676]	@ 0000ace6 a949
.org 0xace8
	adds r5, r5, r1	@ 0000ace8 6d18
.org 0xacea
	ldrh r2, [r5, #0]	@ 0000acea 2a88
.org 0xacec
	movs r4, #248	@ 0000acec f824
.org 0xacee
	lsls r4, r4, #5	@ 0000acee 6401
.org 0xacf0
	adds r1, r4, #0	@ 0000acf0 211c
.org 0xacf2
	ands r1, r2	@ 0000acf2 1140
.org 0xacf4
	lsls r1, r1, #3	@ 0000acf4 c900
.org 0xacf6
	movs r2, #192	@ 0000acf6 c022
.org 0xacf8
	lsls r2, r2, #19	@ 0000acf8 d204
.org 0xacfa
	adds r1, r1, r2	@ 0000acfa 8918
.org 0xacfc
	movs r6, #128	@ 0000acfc 8026
.org 0xacfe
	lsls r6, r6, #2	@ 0000acfe b600
.org 0xad00
	adds r2, r6, #0	@ 0000ad00 321c
.org 0xad02
	bl 0x128be0	@ 0000ad02 1df16dff
.org 0xad06
	ldr r0, [pc, #648]	@ 0000ad06 a248
.org 0xad08
	ldr r0, [r0, #0]	@ 0000ad08 0068
.org 0xad0a
	ldr r1, [pc, #648]	@ 0000ad0a a249
.org 0xad0c
	adds r0, r0, r1	@ 0000ad0c 4018
.org 0xad0e
	ldrh r1, [r5, #0]	@ 0000ad0e 2988
.org 0xad10
	ands r4, r1	@ 0000ad10 0c40
.org 0xad12
	lsls r4, r4, #3	@ 0000ad12 e400
.org 0xad14
	ldr r2, [pc, #640]	@ 0000ad14 a04a
.org 0xad16
	adds r4, r4, r2	@ 0000ad16 a418
.org 0xad18
	adds r1, r4, #0	@ 0000ad18 211c
.org 0xad1a
	adds r2, r6, #0	@ 0000ad1a 321c
.org 0xad1c
	bl 0x128be0	@ 0000ad1c 1df160ff
.org 0xad20
	movs r0, #160	@ 0000ad20 a020
.org 0xad22
	lsls r0, r0, #2	@ 0000ad22 8000
.org 0xad24
	bl 0xa70	@ 0000ad24 f5f7a4fe
.org 0xad28
	adds r6, r0, #0	@ 0000ad28 061c
.org 0xad2a
	cmp r6, #0	@ 0000ad2a 002e
.org 0xad2c
	bne.n 0xad30	@ 0000ad2c 00d1
.org 0xad2e
	b.n 0xaffa	@ 0000ad2e 64e1
.org 0xad30
	ldr r2, [pc, #616]	@ 0000ad30 9a4a
.org 0xad32
	movs r3, #186	@ 0000ad32 ba23
.org 0xad34
	lsls r3, r3, #1	@ 0000ad34 5b00
.org 0xad36
	adds r0, r2, r3	@ 0000ad36 d018
.org 0xad38
	str r6, [r0, #0]	@ 0000ad38 0660
.org 0xad3a
	movs r0, #188	@ 0000ad3a bc20
.org 0xad3c
	lsls r0, r0, #1	@ 0000ad3c 4000
.org 0xad3e
	adds r1, r2, r0	@ 0000ad3e 1118
.org 0xad40
	ldr r0, [pc, #604]	@ 0000ad40 9748
.org 0xad42
	str r0, [r1, #0]	@ 0000ad42 0860
.org 0xad44
	adds r3, #8	@ 0000ad44 0833
.org 0xad46
	adds r1, r2, r3	@ 0000ad46 d118
.org 0xad48
	ldr r0, [pc, #600]	@ 0000ad48 9648
.org 0xad4a
	str r0, [r1, #0]	@ 0000ad4a 0860
.org 0xad4c
	mov r0, r8	@ 0000ad4c 4046
.org 0xad4e
	ldr r1, [r0, #52]	@ 0000ad4e 416b
.org 0xad50
	asrs r1, r1, #1	@ 0000ad50 4910
.org 0xad52
	adds r0, #104	@ 0000ad52 6830
.org 0xad54
	ldrh r0, [r0, #0]	@ 0000ad54 0088
.org 0xad56
	lsrs r0, r0, #8	@ 0000ad56 000a
.org 0xad58
	adds r1, r1, r0	@ 0000ad58 0918
.org 0xad5a
	lsls r1, r1, #16	@ 0000ad5a 0904
.org 0xad5c
	lsrs r1, r1, #16	@ 0000ad5c 090c
.org 0xad5e
	mov r2, r8	@ 0000ad5e 4246
.org 0xad60
	ldr r0, [r2, #56]	@ 0000ad60 906b
.org 0xad62
	ldr r3, [pc, #580]	@ 0000ad62 914b
.org 0xad64
	adds r0, r0, r3	@ 0000ad64 c018
.org 0xad66
	lsls r0, r0, #16	@ 0000ad66 0004
.org 0xad68
	lsrs r5, r0, #16	@ 0000ad68 050c
.org 0xad6a
	lsls r3, r5, #16	@ 0000ad6a 2b04
.org 0xad6c
	asrs r0, r3, #16	@ 0000ad6c 1814
.org 0xad6e
	adds r0, #159	@ 0000ad6e 9f30
.org 0xad70
	movs r2, #106	@ 0000ad70 6a22
.org 0xad72
	add r2, r8	@ 0000ad72 4244
.org 0xad74
	mov ip, r2	@ 0000ad74 9446
.org 0xad76
	movs r2, #108	@ 0000ad76 6c22
.org 0xad78
	add r2, r8	@ 0000ad78 4244
.org 0xad7a
	mov r9, r2	@ 0000ad7a 9146
.org 0xad7c
	movs r2, #110	@ 0000ad7c 6e22
.org 0xad7e
	add r2, r8	@ 0000ad7e 4244
.org 0xad80
	mov sl, r2	@ 0000ad80 9246
.org 0xad82
	mov r2, r8	@ 0000ad82 4246
.org 0xad84
	adds r2, #112	@ 0000ad84 7032
.org 0xad86
	str r2, [sp, #0]	@ 0000ad86 0092
.org 0xad88
	adds r2, #2	@ 0000ad88 0232
.org 0xad8a
	str r2, [sp, #4]	@ 0000ad8a 0192
.org 0xad8c
	adds r2, #2	@ 0000ad8c 0232
.org 0xad8e
	str r2, [sp, #8]	@ 0000ad8e 0292
.org 0xad90
	adds r2, #2	@ 0000ad90 0232
.org 0xad92
	str r2, [sp, #12]	@ 0000ad92 0392
.org 0xad94
	adds r2, #2	@ 0000ad94 0232
.org 0xad96
	str r2, [sp, #16]	@ 0000ad96 0492
.org 0xad98
	cmp r0, #236	@ 0000ad98 ec28
.org 0xad9a
	ble.n 0xadb8	@ 0000ad9a 0ddd
.org 0xad9c
	adds r4, r1, #0	@ 0000ad9c 0c1c
.org 0xad9e
	lsls r0, r7, #2	@ 0000ad9e b800
.org 0xada0
	adds r2, r6, r0	@ 0000ada0 3218
.org 0xada2
	asrs r1, r3, #16	@ 0000ada2 1914
.org 0xada4
	adds r0, r3, #0	@ 0000ada4 181c
.org 0xada6
	orrs r0, r4	@ 0000ada6 2043
.org 0xada8
	str r0, [r2, #0]	@ 0000ada8 1060
.org 0xadaa
	subs r2, #4	@ 0000adaa 043a
.org 0xadac
	subs r7, #1	@ 0000adac 013f
.org 0xadae
	adds r1, r1, r7	@ 0000adae c919
.org 0xadb0
	cmp r1, #236	@ 0000adb0 ec29
.org 0xadb2
	ble.n 0xadb8	@ 0000adb2 01dd
.org 0xadb4
	cmp r7, #0	@ 0000adb4 002f
.org 0xadb6
	bge.n 0xada2	@ 0000adb6 f4da
.org 0xadb8
	mov r3, r8	@ 0000adb8 4346
.org 0xadba
	ldr r0, [r3, #52]	@ 0000adba 586b
.org 0xadbc
	asrs r0, r0, #2	@ 0000adbc 8010
.org 0xadbe
	mov r2, ip	@ 0000adbe 6246
.org 0xadc0
	ldrh r1, [r2, #0]	@ 0000adc0 1188
.org 0xadc2
	lsrs r1, r1, #8	@ 0000adc2 090a
.org 0xadc4
	adds r0, r0, r1	@ 0000adc4 4018
.org 0xadc6
	lsls r0, r0, #16	@ 0000adc6 0004
.org 0xadc8
	lsrs r1, r0, #16	@ 0000adc8 010c
.org 0xadca
	lsls r3, r5, #16	@ 0000adca 2b04
.org 0xadcc
	asrs r0, r3, #16	@ 0000adcc 1814
.org 0xadce
	adds r0, r0, r7	@ 0000adce c019
.org 0xadd0
	adds r5, r3, #0	@ 0000add0 1d1c
.org 0xadd2
	cmp r0, #199	@ 0000add2 c728
.org 0xadd4
	ble.n 0xadf6	@ 0000add4 0fdd
.org 0xadd6
	cmp r7, #0	@ 0000add6 002f
.org 0xadd8
	blt.n 0xadf6	@ 0000add8 0ddb
.org 0xadda
	adds r4, r1, #0	@ 0000adda 0c1c
.org 0xaddc
	lsls r0, r7, #2	@ 0000addc b800
.org 0xadde
	adds r2, r0, r6	@ 0000adde 8219
.org 0xade0
	asrs r1, r3, #16	@ 0000ade0 1914
.org 0xade2
	adds r0, r3, #0	@ 0000ade2 181c
.org 0xade4
	orrs r0, r4	@ 0000ade4 2043
.org 0xade6
	str r0, [r2, #0]	@ 0000ade6 1060
.org 0xade8
	subs r2, #4	@ 0000ade8 043a
.org 0xadea
	subs r7, #1	@ 0000adea 013f
.org 0xadec
	adds r1, r1, r7	@ 0000adec c919
.org 0xadee
	cmp r1, #199	@ 0000adee c729
.org 0xadf0
	ble.n 0xadf6	@ 0000adf0 01dd
.org 0xadf2
	cmp r7, #0	@ 0000adf2 002f
.org 0xadf4
	bge.n 0xade0	@ 0000adf4 f4da
.org 0xadf6
	mov r3, r8	@ 0000adf6 4346
.org 0xadf8
	ldr r0, [r3, #52]	@ 0000adf8 586b
.org 0xadfa
	asrs r0, r0, #4	@ 0000adfa 0011
.org 0xadfc
	mov r2, r9	@ 0000adfc 4a46
.org 0xadfe
	ldrh r1, [r2, #0]	@ 0000adfe 1188
.org 0xae00
	lsrs r1, r1, #8	@ 0000ae00 090a
.org 0xae02
	adds r0, r0, r1	@ 0000ae02 4018
.org 0xae04
	lsls r0, r0, #16	@ 0000ae04 0004
.org 0xae06
	lsrs r1, r0, #16	@ 0000ae06 010c
.org 0xae08
	adds r3, r5, #0	@ 0000ae08 2b1c
.org 0xae0a
	asrs r0, r5, #16	@ 0000ae0a 2814
.org 0xae0c
	adds r0, r0, r7	@ 0000ae0c c019
.org 0xae0e
	cmp r0, #184	@ 0000ae0e b828
.org 0xae10
	ble.n 0xae32	@ 0000ae10 0fdd
.org 0xae12
	cmp r7, #0	@ 0000ae12 002f
.org 0xae14
	blt.n 0xae32	@ 0000ae14 0ddb
.org 0xae16
	adds r4, r1, #0	@ 0000ae16 0c1c
.org 0xae18
	lsls r0, r7, #2	@ 0000ae18 b800
.org 0xae1a
	adds r2, r0, r6	@ 0000ae1a 8219
.org 0xae1c
	asrs r1, r3, #16	@ 0000ae1c 1914
.org 0xae1e
	adds r0, r3, #0	@ 0000ae1e 181c
.org 0xae20
	orrs r0, r4	@ 0000ae20 2043
.org 0xae22
	str r0, [r2, #0]	@ 0000ae22 1060
.org 0xae24
	subs r2, #4	@ 0000ae24 043a
.org 0xae26
	subs r7, #1	@ 0000ae26 013f
.org 0xae28
	adds r1, r1, r7	@ 0000ae28 c919
.org 0xae2a
	cmp r1, #184	@ 0000ae2a b829
.org 0xae2c
	ble.n 0xae32	@ 0000ae2c 01dd
.org 0xae2e
	cmp r7, #0	@ 0000ae2e 002f
.org 0xae30
	bge.n 0xae1c	@ 0000ae30 f4da
.org 0xae32
	mov r3, r8	@ 0000ae32 4346
.org 0xae34
	ldr r0, [r3, #52]	@ 0000ae34 586b
.org 0xae36
	asrs r0, r0, #5	@ 0000ae36 4011
.org 0xae38
	mov r2, sl	@ 0000ae38 5246
.org 0xae3a
	ldrh r1, [r2, #0]	@ 0000ae3a 1188
.org 0xae3c
	lsrs r1, r1, #8	@ 0000ae3c 090a
.org 0xae3e
	adds r0, r0, r1	@ 0000ae3e 4018
.org 0xae40
	lsls r0, r0, #16	@ 0000ae40 0004
.org 0xae42
	lsrs r1, r0, #16	@ 0000ae42 010c
.org 0xae44
	adds r3, r5, #0	@ 0000ae44 2b1c
.org 0xae46
	asrs r0, r5, #16	@ 0000ae46 2814
.org 0xae48
	adds r0, r0, r7	@ 0000ae48 c019
.org 0xae4a
	cmp r0, #176	@ 0000ae4a b028
.org 0xae4c
	ble.n 0xae6e	@ 0000ae4c 0fdd
.org 0xae4e
	cmp r7, #0	@ 0000ae4e 002f
.org 0xae50
	blt.n 0xae6e	@ 0000ae50 0ddb
.org 0xae52
	adds r4, r1, #0	@ 0000ae52 0c1c
.org 0xae54
	lsls r0, r7, #2	@ 0000ae54 b800
.org 0xae56
	adds r2, r0, r6	@ 0000ae56 8219
.org 0xae58
	asrs r1, r3, #16	@ 0000ae58 1914
.org 0xae5a
	adds r0, r3, #0	@ 0000ae5a 181c
.org 0xae5c
	orrs r0, r4	@ 0000ae5c 2043
.org 0xae5e
	str r0, [r2, #0]	@ 0000ae5e 1060
.org 0xae60
	subs r2, #4	@ 0000ae60 043a
.org 0xae62
	subs r7, #1	@ 0000ae62 013f
.org 0xae64
	adds r1, r1, r7	@ 0000ae64 c919
.org 0xae66
	cmp r1, #176	@ 0000ae66 b029
.org 0xae68
	ble.n 0xae6e	@ 0000ae68 01dd
.org 0xae6a
	cmp r7, #0	@ 0000ae6a 002f
.org 0xae6c
	bge.n 0xae58	@ 0000ae6c f4da
.org 0xae6e
	mov r3, r8	@ 0000ae6e 4346
.org 0xae70
	ldr r0, [r3, #52]	@ 0000ae70 586b
.org 0xae72
	asrs r0, r0, #5	@ 0000ae72 4011
.org 0xae74
	ldr r2, [sp, #0]	@ 0000ae74 009a
.org 0xae76
	ldrh r1, [r2, #0]	@ 0000ae76 1188
.org 0xae78
	lsrs r1, r1, #8	@ 0000ae78 090a
.org 0xae7a
	adds r0, r0, r1	@ 0000ae7a 4018
.org 0xae7c
	lsls r0, r0, #16	@ 0000ae7c 0004
.org 0xae7e
	lsrs r1, r0, #16	@ 0000ae7e 010c
.org 0xae80
	adds r3, r5, #0	@ 0000ae80 2b1c
.org 0xae82
	asrs r0, r5, #16	@ 0000ae82 2814
.org 0xae84
	adds r0, r0, r7	@ 0000ae84 c019
.org 0xae86
	cmp r0, #170	@ 0000ae86 aa28
.org 0xae88
	ble.n 0xaeaa	@ 0000ae88 0fdd
.org 0xae8a
	cmp r7, #0	@ 0000ae8a 002f
.org 0xae8c
	blt.n 0xaeaa	@ 0000ae8c 0ddb
.org 0xae8e
	adds r4, r1, #0	@ 0000ae8e 0c1c
.org 0xae90
	lsls r0, r7, #2	@ 0000ae90 b800
.org 0xae92
	adds r2, r0, r6	@ 0000ae92 8219
.org 0xae94
	asrs r1, r3, #16	@ 0000ae94 1914
.org 0xae96
	adds r0, r3, #0	@ 0000ae96 181c
.org 0xae98
	orrs r0, r4	@ 0000ae98 2043
.org 0xae9a
	str r0, [r2, #0]	@ 0000ae9a 1060
.org 0xae9c
	subs r2, #4	@ 0000ae9c 043a
.org 0xae9e
	subs r7, #1	@ 0000ae9e 013f
.org 0xaea0
	adds r1, r1, r7	@ 0000aea0 c919
.org 0xaea2
	cmp r1, #170	@ 0000aea2 aa29
.org 0xaea4
	ble.n 0xaeaa	@ 0000aea4 01dd
.org 0xaea6
	cmp r7, #0	@ 0000aea6 002f
.org 0xaea8
	bge.n 0xae94	@ 0000aea8 f4da
.org 0xaeaa
	mov r3, r8	@ 0000aeaa 4346
.org 0xaeac
	ldr r0, [r3, #52]	@ 0000aeac 586b
.org 0xaeae
	asrs r0, r0, #6	@ 0000aeae 8011
.org 0xaeb0
	ldr r2, [sp, #4]	@ 0000aeb0 019a
.org 0xaeb2
	ldrh r1, [r2, #0]	@ 0000aeb2 1188
.org 0xaeb4
	lsrs r1, r1, #8	@ 0000aeb4 090a
.org 0xaeb6
	adds r0, r0, r1	@ 0000aeb6 4018
.org 0xaeb8
	lsls r0, r0, #16	@ 0000aeb8 0004
.org 0xaeba
	lsrs r1, r0, #16	@ 0000aeba 010c
.org 0xaebc
	adds r3, r5, #0	@ 0000aebc 2b1c
.org 0xaebe
	asrs r0, r5, #16	@ 0000aebe 2814
.org 0xaec0
	adds r0, r0, r7	@ 0000aec0 c019
.org 0xaec2
	cmp r0, #167	@ 0000aec2 a728
.org 0xaec4
	ble.n 0xaee6	@ 0000aec4 0fdd
.org 0xaec6
	cmp r7, #0	@ 0000aec6 002f
.org 0xaec8
	blt.n 0xaee6	@ 0000aec8 0ddb
.org 0xaeca
	adds r4, r1, #0	@ 0000aeca 0c1c
.org 0xaecc
	lsls r0, r7, #2	@ 0000aecc b800
.org 0xaece
	adds r2, r0, r6	@ 0000aece 8219
.org 0xaed0
	asrs r1, r3, #16	@ 0000aed0 1914
.org 0xaed2
	adds r0, r3, #0	@ 0000aed2 181c
.org 0xaed4
	orrs r0, r4	@ 0000aed4 2043
.org 0xaed6
	str r0, [r2, #0]	@ 0000aed6 1060
.org 0xaed8
	subs r2, #4	@ 0000aed8 043a
.org 0xaeda
	subs r7, #1	@ 0000aeda 013f
.org 0xaedc
	adds r1, r1, r7	@ 0000aedc c919
.org 0xaede
	cmp r1, #167	@ 0000aede a729
.org 0xaee0
	ble.n 0xaee6	@ 0000aee0 01dd
.org 0xaee2
	cmp r7, #0	@ 0000aee2 002f
.org 0xaee4
	bge.n 0xaed0	@ 0000aee4 f4da
.org 0xaee6
	mov r3, r8	@ 0000aee6 4346
.org 0xaee8
	ldr r0, [r3, #52]	@ 0000aee8 586b
.org 0xaeea
	asrs r0, r0, #6	@ 0000aeea 8011
.org 0xaeec
	ldr r2, [sp, #8]	@ 0000aeec 029a
.org 0xaeee
	ldrh r1, [r2, #0]	@ 0000aeee 1188
.org 0xaef0
	lsrs r1, r1, #8	@ 0000aef0 090a
.org 0xaef2
	adds r0, r0, r1	@ 0000aef2 4018
.org 0xaef4
	lsls r0, r0, #16	@ 0000aef4 0004
.org 0xaef6
	lsrs r1, r0, #16	@ 0000aef6 010c
.org 0xaef8
	adds r3, r5, #0	@ 0000aef8 2b1c
.org 0xaefa
	asrs r0, r5, #16	@ 0000aefa 2814
.org 0xaefc
	adds r0, r0, r7	@ 0000aefc c019
.org 0xaefe
	cmp r0, #163	@ 0000aefe a328
.org 0xaf00
	ble.n 0xaf22	@ 0000af00 0fdd
.org 0xaf02
	cmp r7, #0	@ 0000af02 002f
.org 0xaf04
	blt.n 0xaf22	@ 0000af04 0ddb
.org 0xaf06
	adds r4, r1, #0	@ 0000af06 0c1c
.org 0xaf08
	lsls r0, r7, #2	@ 0000af08 b800
.org 0xaf0a
	adds r2, r0, r6	@ 0000af0a 8219
.org 0xaf0c
	asrs r1, r3, #16	@ 0000af0c 1914
.org 0xaf0e
	adds r0, r3, #0	@ 0000af0e 181c
.org 0xaf10
	orrs r0, r4	@ 0000af10 2043
.org 0xaf12
	str r0, [r2, #0]	@ 0000af12 1060
.org 0xaf14
	subs r2, #4	@ 0000af14 043a
.org 0xaf16
	subs r7, #1	@ 0000af16 013f
.org 0xaf18
	adds r1, r1, r7	@ 0000af18 c919
.org 0xaf1a
	cmp r1, #163	@ 0000af1a a329
.org 0xaf1c
	ble.n 0xaf22	@ 0000af1c 01dd
.org 0xaf1e
	cmp r7, #0	@ 0000af1e 002f
.org 0xaf20
	bge.n 0xaf0c	@ 0000af20 f4da
.org 0xaf22
	mov r3, r8	@ 0000af22 4346
.org 0xaf24
	ldr r0, [r3, #52]	@ 0000af24 586b
.org 0xaf26
	asrs r0, r0, #7	@ 0000af26 c011
.org 0xaf28
	ldr r2, [sp, #12]	@ 0000af28 039a
.org 0xaf2a
	ldrh r1, [r2, #0]	@ 0000af2a 1188
.org 0xaf2c
	lsrs r1, r1, #8	@ 0000af2c 090a
.org 0xaf2e
	adds r0, r0, r1	@ 0000af2e 4018
.org 0xaf30
	lsls r0, r0, #16	@ 0000af30 0004
.org 0xaf32
	lsrs r1, r0, #16	@ 0000af32 010c
.org 0xaf34
	adds r3, r5, #0	@ 0000af34 2b1c
.org 0xaf36
	asrs r0, r5, #16	@ 0000af36 2814
.org 0xaf38
	adds r0, r0, r7	@ 0000af38 c019
.org 0xaf3a
	cmp r0, #159	@ 0000af3a 9f28
.org 0xaf3c
	ble.n 0xaf5e	@ 0000af3c 0fdd
.org 0xaf3e
	cmp r7, #0	@ 0000af3e 002f
.org 0xaf40
	blt.n 0xaf5e	@ 0000af40 0ddb
.org 0xaf42
	adds r4, r1, #0	@ 0000af42 0c1c
.org 0xaf44
	lsls r0, r7, #2	@ 0000af44 b800
.org 0xaf46
	adds r2, r0, r6	@ 0000af46 8219
.org 0xaf48
	asrs r1, r3, #16	@ 0000af48 1914
.org 0xaf4a
	adds r0, r3, #0	@ 0000af4a 181c
.org 0xaf4c
	orrs r0, r4	@ 0000af4c 2043
.org 0xaf4e
	str r0, [r2, #0]	@ 0000af4e 1060
.org 0xaf50
	subs r2, #4	@ 0000af50 043a
.org 0xaf52
	subs r7, #1	@ 0000af52 013f
.org 0xaf54
	adds r1, r1, r7	@ 0000af54 c919
.org 0xaf56
	cmp r1, #159	@ 0000af56 9f29
.org 0xaf58
	ble.n 0xaf5e	@ 0000af58 01dd
.org 0xaf5a
	cmp r7, #0	@ 0000af5a 002f
.org 0xaf5c
	bge.n 0xaf48	@ 0000af5c f4da
.org 0xaf5e
	ldr r3, [sp, #16]	@ 0000af5e 049b
.org 0xaf60
	ldrh r0, [r3, #0]	@ 0000af60 1888
.org 0xaf62
	lsls r0, r0, #16	@ 0000af62 0004
.org 0xaf64
	cmp r0, #0	@ 0000af64 0028
.org 0xaf66
	beq.n 0xafac	@ 0000af66 21d0
.org 0xaf68
	lsrs r0, r0, #20	@ 0000af68 000d
.org 0xaf6a
	mov r2, r8	@ 0000af6a 4246
.org 0xaf6c
	ldr r1, [r2, #124]	@ 0000af6c d16f
.org 0xaf6e
	ldr r2, [r2, #52]	@ 0000af6e 526b
.org 0xaf70
	subs r1, r1, r2	@ 0000af70 891a
.org 0xaf72
	subs r0, r0, r1	@ 0000af72 401a
.org 0xaf74
	lsls r0, r0, #16	@ 0000af74 0004
.org 0xaf76
	lsrs r1, r0, #16	@ 0000af76 010c
.org 0xaf78
	b.n 0xafae	@ 0000af78 19e0
.org 0xaf7a
	.byte 0x00	@ 0000af7a data
.org 0xaf7b
	.byte 0x00	@ 0000af7b data
.org 0xaf7c
	.byte 0xb0,0x0a,0x00,0x02	@ 0000af7c data
.org 0xaf80
	.byte 0x02,0xc0,0x02,0x00	@ 0000af80 data
.org 0xaf84
	.byte 0xa8,0xc0,0xb2,0x08	@ 0000af84 data
.org 0xaf88
	.byte 0xb0,0xc0,0xb2,0x08	@ 0000af88 data
.org 0xaf8c
	.byte 0x04,0x0a,0x00,0x02	@ 0000af8c data
.org 0xaf90
	.byte 0xac,0xc0,0xb2,0x08	@ 0000af90 data
.org 0xaf94
	.byte 0xb4,0xc0,0xb2,0x08	@ 0000af94 data
.org 0xaf98
	.byte 0x00,0x08,0x00,0x06	@ 0000af98 data
.org 0xaf9c
	.byte 0x90,0x15,0x00,0x03	@ 0000af9c data
.org 0xafa0
	.byte 0x1c,0x00,0x00,0x04	@ 0000afa0 data
.org 0xafa4
	.byte 0x01,0x00,0x60,0xa6	@ 0000afa4 data
.org 0xafa8
	.byte 0x80,0xfe,0xff,0xff	@ 0000afa8 data
.org 0xafac
	movs r1, #0	@ 0000afac 0021
.org 0xafae
	adds r3, r5, #0	@ 0000afae 2b1c
.org 0xafb0
	asrs r0, r3, #16	@ 0000afb0 1814
.org 0xafb2
	adds r0, r0, r7	@ 0000afb2 c019
.org 0xafb4
	cmp r0, #0	@ 0000afb4 0028
.org 0xafb6
	blt.n 0xafd8	@ 0000afb6 0fdb
.org 0xafb8
	cmp r7, #0	@ 0000afb8 002f
.org 0xafba
	blt.n 0xafd8	@ 0000afba 0ddb
.org 0xafbc
	adds r4, r1, #0	@ 0000afbc 0c1c
.org 0xafbe
	lsls r0, r7, #2	@ 0000afbe b800
.org 0xafc0
	adds r2, r0, r6	@ 0000afc0 8219
.org 0xafc2
	asrs r1, r3, #16	@ 0000afc2 1914
.org 0xafc4
	adds r0, r3, #0	@ 0000afc4 181c
.org 0xafc6
	orrs r0, r4	@ 0000afc6 2043
.org 0xafc8
	str r0, [r2, #0]	@ 0000afc8 1060
.org 0xafca
	subs r2, #4	@ 0000afca 043a
.org 0xafcc
	subs r7, #1	@ 0000afcc 013f
.org 0xafce
	adds r1, r1, r7	@ 0000afce c919
.org 0xafd0
	cmp r1, #0	@ 0000afd0 0029
.org 0xafd2
	blt.n 0xafd8	@ 0000afd2 01db
.org 0xafd4
	cmp r7, #0	@ 0000afd4 002f
.org 0xafd6
	bge.n 0xafc2	@ 0000afd6 f4da
