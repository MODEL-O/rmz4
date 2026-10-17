@ FUN_081038fc  entry 0x081038fc  size 118
.thumb
.org 0x1038fc
FUN_081038fc:
	push {r4, r5, lr}	@ 001038fc 30b5
.org 0x1038fe
	adds r5, r0, #0	@ 001038fe 051c
.org 0x103900
	ldrb r1, [r5, #10]	@ 00103900 a97a
.org 0x103902
	movs r0, #2	@ 00103902 0220
.org 0x103904
	movs r2, #0	@ 00103904 0022
.org 0x103906
	orrs r1, r0	@ 00103906 0143
.org 0x103908
	strb r1, [r5, #10]	@ 00103908 a972
.org 0x10390a
	ldrb r0, [r5, #17]	@ 0010390a 687c
.org 0x10390c
	cmp r0, #0	@ 0010390c 0028
.org 0x10390e
	bne.n 0x103960	@ 0010390e 27d1
.org 0x103910
	movs r0, #4	@ 00103910 0420
.org 0x103912
	orrs r1, r0	@ 00103912 0143
.org 0x103914
	strb r1, [r5, #10]	@ 00103914 a972
.org 0x103916
	adds r4, r5, #0	@ 00103916 2c1c
.org 0x103918
	adds r4, #116	@ 00103918 7434
.org 0x10391a
	ldr r1, [pc, #56]	@ 0010391a 0e49
.org 0x10391c
	adds r2, r5, #0	@ 0010391c 2a1c
.org 0x10391e
	adds r2, #84	@ 0010391e 5432
.org 0x103920
	adds r0, r4, #0	@ 00103920 201c
.org 0x103922
	movs r3, #0	@ 00103922 0023
.org 0x103924
	bl 0x5760	@ 00103924 01f71cff
.org 0x103928
	str r5, [r4, #44]	@ 00103928 e562
.org 0x10392a
	ldr r0, [pc, #44]	@ 0010392a 0b48
.org 0x10392c
	str r0, [r4, #36]	@ 0010392c 6062
.org 0x10392e
	ldrb r1, [r5, #11]	@ 0010392e e97a
.org 0x103930
	movs r0, #239	@ 00103930 ef20
.org 0x103932
	ands r0, r1	@ 00103932 0840
.org 0x103934
	strb r0, [r5, #11]	@ 00103934 e872
.org 0x103936
	ldrb r0, [r5, #28]	@ 00103936 287f
.org 0x103938
	strb r0, [r5, #29]	@ 00103938 6877
.org 0x10393a
	ldr r1, [pc, #32]	@ 0010393a 0849
.org 0x10393c
	ldrb r0, [r5, #9]	@ 0010393c 687a
.org 0x10393e
	lsls r0, r0, #2	@ 0010393e 8000
.org 0x103940
	adds r0, r0, r1	@ 00103940 4018
.org 0x103942
	movs r1, #1	@ 00103942 0121
.org 0x103944
	str r1, [r5, #12]	@ 00103944 e960
.org 0x103946
	ldr r0, [r0, #0]	@ 00103946 0068
.org 0x103948
	ldr r0, [r0, #4]	@ 00103948 4068
.org 0x10394a
	str r0, [r5, #20]	@ 0010394a 6861
.org 0x10394c
	adds r0, r5, #0	@ 0010394c 281c
.org 0x10394e
	bl 0x103984	@ 0010394e 00f019f8
.org 0x103952
	b.n 0x103978	@ 00103952 11e0
.org 0x103954
	.byte 0xf0,0xbd,0x86,0x08	@ 00103954 data
.org 0x103958
	.byte 0xe5,0x39,0x10,0x08	@ 00103958 data
.org 0x10395c
	.byte 0xfc,0x92,0x86,0x08	@ 0010395c data
.org 0x103960
	ldr r1, [pc, #28]	@ 00103960 0749
.org 0x103962
	ldrb r0, [r5, #9]	@ 00103962 687a
.org 0x103964
	lsls r0, r0, #2	@ 00103964 8000
.org 0x103966
	adds r0, r0, r1	@ 00103966 4018
.org 0x103968
	movs r1, #2	@ 00103968 0221
.org 0x10396a
	str r1, [r5, #12]	@ 0010396a e960
.org 0x10396c
	ldr r0, [r0, #0]	@ 0010396c 0068
.org 0x10396e
	ldr r0, [r0, #8]	@ 0010396e 8068
.org 0x103970
	str r0, [r5, #20]	@ 00103970 6861
