@ FUN_080d78e4  entry 0x080d78e4  size 150
.thumb
.org 0xd78e4
FUN_080d78e4:
	push {r4, r5, r6, r7, lr}	@ 000d78e4 f0b5
.org 0xd78e6
	mov r7, sl	@ 000d78e6 5746
.org 0xd78e8
	mov r6, r9	@ 000d78e8 4e46
.org 0xd78ea
	mov r5, r8	@ 000d78ea 4546
.org 0xd78ec
	push {r5, r6, r7}	@ 000d78ec e0b4
.org 0xd78ee
	sub sp, #4	@ 000d78ee 81b0
.org 0xd78f0
	str r0, [sp, #0]	@ 000d78f0 0090
.org 0xd78f2
	adds r5, r1, #0	@ 000d78f2 0d1c
.org 0xd78f4
	adds r6, r2, #0	@ 000d78f4 161c
.org 0xd78f6
	mov sl, r3	@ 000d78f6 9a46
.org 0xd78f8
	ldr r0, [sp, #40]	@ 000d78f8 0a98
.org 0xd78fa
	ldr r1, [sp, #44]	@ 000d78fa 0b99
.org 0xd78fc
	lsls r0, r0, #24	@ 000d78fc 0006
.org 0xd78fe
	lsrs r0, r0, #24	@ 000d78fe 000e
.org 0xd7900
	mov r9, r0	@ 000d7900 8146
.org 0xd7902
	lsls r1, r1, #24	@ 000d7902 0906
.org 0xd7904
	lsrs r1, r1, #24	@ 000d7904 090e
.org 0xd7906
	mov r8, r1	@ 000d7906 8846
.org 0xd7908
	ldr r0, [pc, #112]	@ 000d7908 1c48
.org 0xd790a
	ldr r0, [r0, #0]	@ 000d790a 0068
.org 0xd790c
	bl 0x5500	@ 000d790c 2df7f8fd
.org 0xd7910
	mov ip, r0	@ 000d7910 8446
.org 0xd7912
	cmp r0, #0	@ 000d7912 0028
.org 0xd7914
	beq.n 0xd796a	@ 000d7914 29d0
.org 0xd7916
	mov r4, ip	@ 000d7916 6446
.org 0xd7918
	adds r4, #37	@ 000d7918 2534
.org 0xd791a
	movs r2, #0	@ 000d791a 0022
.org 0xd791c
	movs r3, #1	@ 000d791c 0123
.org 0xd791e
	strb r3, [r4, #0]	@ 000d791e 2370
.org 0xd7920
	ldr r1, [pc, #92]	@ 000d7920 1749
.org 0xd7922
	movs r0, #23	@ 000d7922 1720
.org 0xd7924
	mov r7, ip	@ 000d7924 6746
.org 0xd7926
	strb r0, [r7, #9]	@ 000d7926 7872
.org 0xd7928
	ldr r0, [r1, #92]	@ 000d7928 c86d
.org 0xd792a
	ldr r0, [r0, #0]	@ 000d792a 0068
.org 0xd792c
	str r0, [r7, #20]	@ 000d792c 7861
.org 0xd792e
	movs r1, #0	@ 000d792e 0021
.org 0xd7930
	strh r2, [r7, #32]	@ 000d7930 3a84
.org 0xd7932
	mov r0, ip	@ 000d7932 6046
.org 0xd7934
	adds r0, #34	@ 000d7934 2230
.org 0xd7936
	strb r1, [r0, #0]	@ 000d7936 0170
.org 0xd7938
	movs r0, #4	@ 000d7938 0420
.org 0xd793a
	strb r0, [r7, #16]	@ 000d793a 3874
.org 0xd793c
	ldr r0, [sp, #0]	@ 000d793c 0098
.org 0xd793e
	str r0, [r7, #40]	@ 000d793e b862
.org 0xd7940
	ldr r0, [sp, #36]	@ 000d7940 0998
.org 0xd7942
	str r0, [r7, #116]	@ 000d7942 7867
.org 0xd7944
	ldr r0, [r5, #0]	@ 000d7944 2868
.org 0xd7946
	str r0, [r7, #84]	@ 000d7946 7865
.org 0xd7948
	ldr r0, [r5, #4]	@ 000d7948 6868
.org 0xd794a
	str r0, [r7, #88]	@ 000d794a b865
.org 0xd794c
	ldr r0, [r6, #0]	@ 000d794c 3068
.org 0xd794e
	str r0, [r7, #92]	@ 000d794e f865
.org 0xd7950
	ldr r0, [r6, #4]	@ 000d7950 7068
.org 0xd7952
	str r0, [r7, #96]	@ 000d7952 3866
.org 0xd7954
	mov r2, sl	@ 000d7954 5246
.org 0xd7956
	str r2, [r7, #104]	@ 000d7956 ba66
.org 0xd7958
	mov r0, r9	@ 000d7958 4846
.org 0xd795a
	strb r0, [r7, #18]	@ 000d795a b874
.org 0xd795c
	mov r2, r8	@ 000d795c 4246
.org 0xd795e
	strb r2, [r4, #0]	@ 000d795e 2270
.org 0xd7960
	mov r0, ip	@ 000d7960 6046
.org 0xd7962
	adds r0, #120	@ 000d7962 7830
.org 0xd7964
	strb r3, [r0, #0]	@ 000d7964 0370
.org 0xd7966
	adds r0, #1	@ 000d7966 0130
.org 0xd7968
	strb r1, [r0, #0]	@ 000d7968 0170
.org 0xd796a
	add sp, #4	@ 000d796a 01b0
.org 0xd796c
	pop {r3, r4, r5}	@ 000d796c 38bc
.org 0xd796e
	mov r8, r3	@ 000d796e 9846
.org 0xd7970
	mov r9, r4	@ 000d7970 a146
.org 0xd7972
	mov sl, r5	@ 000d7972 aa46
.org 0xd7974
	pop {r4, r5, r6, r7}	@ 000d7974 f0bc
.org 0xd7976
	pop {r0}	@ 000d7976 01bc
.org 0xd7978
	bx r0	@ 000d7978 0047
