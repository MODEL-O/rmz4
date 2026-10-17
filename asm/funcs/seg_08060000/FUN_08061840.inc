@ FUN_08061840  entry 0x08061840  size 116
.thumb
.org 0x61840
FUN_08061840:
	push {r4, r5, lr}	@ 00061840 30b5
.org 0x61842
	adds r4, r0, #0	@ 00061842 041c
.org 0x61844
	ldrb r5, [r4, #14]	@ 00061844 a57b
.org 0x61846
	cmp r5, #0	@ 00061846 002d
.org 0x61848
	bne.n 0x6185e	@ 00061848 09d1
.org 0x6184a
	ldr r1, [pc, #60]	@ 0006184a 0f49
.org 0x6184c
	bl 0x1cf00	@ 0006184c bbf758fb
.org 0x61850
	ldr r0, [pc, #56]	@ 00061850 0e48
.org 0x61852
	bl 0x2b10	@ 00061852 a1f75df9
.org 0x61856
	strb r5, [r4, #15]	@ 00061856 e573
.org 0x61858
	ldrb r0, [r4, #14]	@ 00061858 a07b
.org 0x6185a
	adds r0, #1	@ 0006185a 0130
.org 0x6185c
	strb r0, [r4, #14]	@ 0006185c a073
.org 0x6185e
	adds r0, r4, #0	@ 0006185e 201c
.org 0x61860
	bl 0x1cff0	@ 00061860 bbf7c6fb
.org 0x61864
	adds r0, r4, #0	@ 00061864 201c
.org 0x61866
	adds r0, #113	@ 00061866 7130
.org 0x61868
	ldrb r0, [r0, #0]	@ 00061868 0078
.org 0x6186a
	lsls r0, r0, #24	@ 0006186a 0006
.org 0x6186c
	asrs r0, r0, #24	@ 0006186c 0016
.org 0x6186e
	cmp r0, #4	@ 0006186e 0428
.org 0x61870
	bgt.n 0x61890	@ 00061870 0edc
.org 0x61872
	ldr r0, [r4, #84]	@ 00061872 606d
.org 0x61874
	ldr r1, [r4, #92]	@ 00061874 e16d
.org 0x61876
	adds r0, r0, r1	@ 00061876 4018
.org 0x61878
	str r0, [r4, #84]	@ 00061878 6065
.org 0x6187a
	ldr r0, [r4, #88]	@ 0006187a a06d
.org 0x6187c
	ldr r1, [r4, #96]	@ 0006187c 216e
.org 0x6187e
	adds r0, r0, r1	@ 0006187e 4018
.org 0x61880
	str r0, [r4, #88]	@ 00061880 a065
.org 0x61882
	adds r1, #64	@ 00061882 4031
.org 0x61884
	str r1, [r4, #96]	@ 00061884 2166
.org 0x61886
	b.n 0x618a4	@ 00061886 0de0
.org 0x61888
	.byte 0x1e,0xa5,0x00,0x00	@ 00061888 data
.org 0x6188c
	.byte 0x1f,0x01,0x00,0x00	@ 0006188c data
.org 0x61890
	ldr r0, [r4, #88]	@ 00061890 a06d
.org 0x61892
	ldr r1, [r4, #96]	@ 00061892 216e
.org 0x61894
	adds r0, r0, r1	@ 00061894 4018
.org 0x61896
	str r0, [r4, #88]	@ 00061896 a065
.org 0x61898
	subs r1, #64	@ 00061898 4039
.org 0x6189a
	str r1, [r4, #96]	@ 0006189a 2166
.org 0x6189c
	cmp r1, #0	@ 0006189c 0029
.org 0x6189e
	bge.n 0x618a4	@ 0006189e 01da
.org 0x618a0
	movs r0, #0	@ 000618a0 0020
.org 0x618a2
	str r0, [r4, #96]	@ 000618a2 2066
.org 0x618a4
	adds r0, r4, #0	@ 000618a4 201c
.org 0x618a6
	adds r0, #115	@ 000618a6 7330
.org 0x618a8
	ldrb r0, [r0, #0]	@ 000618a8 0078
.org 0x618aa
	cmp r0, #3	@ 000618aa 0328
.org 0x618ac
	bne.n 0x618b6	@ 000618ac 03d1
.org 0x618ae
	movs r1, #0	@ 000618ae 0021
.org 0x618b0
	movs r0, #33	@ 000618b0 2120
.org 0x618b2
	strb r0, [r4, #13]	@ 000618b2 6073
