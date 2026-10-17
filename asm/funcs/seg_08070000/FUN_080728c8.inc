@ FUN_080728c8  entry 0x080728c8  size 218
.thumb
.org 0x728c8
FUN_080728c8:
	push {r4, r5, r6, r7, lr}	@ 000728c8 f0b5
.org 0x728ca
	sub sp, #8	@ 000728ca 82b0
.org 0x728cc
	adds r6, r0, #0	@ 000728cc 061c
.org 0x728ce
	ldr r1, [pc, #160]	@ 000728ce 2849
.org 0x728d0
	mov r0, sp	@ 000728d0 6846
.org 0x728d2
	movs r2, #6	@ 000728d2 0622
.org 0x728d4
	bl 0x129258	@ 000728d4 b6f0c0fc
.org 0x728d8
	movs r7, #0	@ 000728d8 0027
.org 0x728da
	adds r0, r6, #0	@ 000728da 301c
.org 0x728dc
	adds r0, #195	@ 000728dc c330
.org 0x728de
	ldrb r4, [r0, #0]	@ 000728de 0478
.org 0x728e0
	ldrb r0, [r6, #15]	@ 000728e0 f07b
.org 0x728e2
	cmp r0, #0	@ 000728e2 0028
.org 0x728e4
	bne.n 0x72900	@ 000728e4 0cd1
.org 0x728e6
	adds r0, r6, #0	@ 000728e6 301c
.org 0x728e8
	movs r1, #20	@ 000728e8 1421
.org 0x728ea
	bl 0x736c4	@ 000728ea 00f0ebfe
.org 0x728ee
	str r7, [r6, #96]	@ 000728ee 3766
.org 0x728f0
	lsls r0, r4, #1	@ 000728f0 6000
.org 0x728f2
	add r0, sp	@ 000728f2 6844
.org 0x728f4
	movs r1, #0	@ 000728f4 0021
.org 0x728f6
	ldrsh r0, [r0, r1]	@ 000728f6 405e
.org 0x728f8
	str r0, [r6, #104]	@ 000728f8 b066
.org 0x728fa
	ldrb r0, [r6, #15]	@ 000728fa f07b
.org 0x728fc
	adds r0, #1	@ 000728fc 0130
.org 0x728fe
	strb r0, [r6, #15]	@ 000728fe f073
.org 0x72900
	adds r0, r6, #0	@ 00072900 301c
.org 0x72902
	bl 0x1cff0	@ 00072902 aaf775fb
.org 0x72906
	adds r0, r6, #0	@ 00072906 301c
.org 0x72908
	adds r0, #116	@ 00072908 7430
.org 0x7290a
	ldr r4, [pc, #104]	@ 0007290a 1a4c
.org 0x7290c
	ldr r3, [pc, #104]	@ 0007290c 1a4b
.org 0x7290e
	adds r1, r6, #0	@ 0007290e 311c
.org 0x72910
	adds r1, #184	@ 00072910 b831
.org 0x72912
	ldrb r2, [r1, #0]	@ 00072912 0a78
.org 0x72914
	lsls r1, r2, #1	@ 00072914 5100
.org 0x72916
	adds r1, r1, r3	@ 00072916 c918
.org 0x72918
	ldrh r1, [r1, #0]	@ 00072918 0988
.org 0x7291a
	lsls r1, r1, #2	@ 0007291a 8900
.org 0x7291c
	adds r1, r1, r4	@ 0007291c 0919
.org 0x7291e
	adds r3, r6, #0	@ 0007291e 331c
.org 0x72920
	adds r3, #113	@ 00072920 7133
.org 0x72922
	movs r5, #0	@ 00072922 0025
.org 0x72924
	ldrsb r5, [r3, r5]	@ 00072924 5d57
.org 0x72926
	ldr r1, [r1, #0]	@ 00072926 0968
.org 0x72928
	lsls r3, r5, #2	@ 00072928 ab00
.org 0x7292a
	adds r3, r3, r1	@ 0007292a 5b18
.org 0x7292c
	ldr r4, [pc, #76]	@ 0007292c 134c
.org 0x7292e
	adds r1, r6, #0	@ 0007292e 311c
.org 0x72930
	adds r1, #185	@ 00072930 b931
.org 0x72932
	ldrb r1, [r1, #0]	@ 00072932 0978
.org 0x72934
	lsls r1, r1, #2	@ 00072934 8900
.org 0x72936
	adds r1, r1, r4	@ 00072936 0919
.org 0x72938
	ldr r1, [r1, #0]	@ 00072938 0968
.org 0x7293a
	lsls r2, r2, #2	@ 0007293a 9200
.org 0x7293c
	adds r2, r2, r1	@ 0007293c 5218
.org 0x7293e
	ldr r1, [r2, #0]	@ 0007293e 1168
.org 0x72940
	adds r1, r1, r5	@ 00072940 4919
.org 0x72942
	ldrb r1, [r1, #0]	@ 00072942 0978
.org 0x72944
	lsls r2, r1, #1	@ 00072944 4a00
.org 0x72946
	adds r2, r2, r1	@ 00072946 5218
.org 0x72948
	lsls r2, r2, #3	@ 00072948 d200
.org 0x7294a
	ldr r1, [r3, #0]	@ 0007294a 1968
.org 0x7294c
	adds r1, r1, r2	@ 0007294c 8918
.org 0x7294e
	bl 0x5784	@ 0007294e 92f719ff
.org 0x72952
	ldr r0, [r6, #88]	@ 00072952 b06d
.org 0x72954
	ldr r1, [r6, #96]	@ 00072954 316e
.org 0x72956
	adds r0, r0, r1	@ 00072956 4018
.org 0x72958
	str r0, [r6, #88]	@ 00072958 b065
.org 0x7295a
	adds r0, r6, #0	@ 0007295a 301c
.org 0x7295c
	bl 0x73850	@ 0007295c 00f078ff
.org 0x72960
	cmp r0, #0	@ 00072960 0028
.org 0x72962
	beq.n 0x72980	@ 00072962 0dd0
.org 0x72964
	adds r0, r6, #0	@ 00072964 301c
.org 0x72966
	bl 0x73a68	@ 00072966 01f07ff8
.org 0x7296a
	str r7, [r6, #96]	@ 0007296a 3766
.org 0x7296c
	movs r7, #1	@ 0007296c 0127
.org 0x7296e
	b.n 0x72992	@ 0007296e 10e0
.org 0x72970
	.byte 0x5c,0x99,0x12,0x08	@ 00072970 data
.org 0x72974
	.byte 0x08,0xcb,0x85,0x08	@ 00072974 data
.org 0x72978
	.byte 0x04,0xcc,0x85,0x08	@ 00072978 data
.org 0x7297c
	.byte 0xfc,0xcb,0x85,0x08	@ 0007297c data
.org 0x72980
	ldr r0, [r6, #96]	@ 00072980 306e
.org 0x72982
	ldr r1, [r6, #104]	@ 00072982 b16e
.org 0x72984
	adds r0, r0, r1	@ 00072984 4018
.org 0x72986
	str r0, [r6, #96]	@ 00072986 3066
.org 0x72988
	movs r1, #224	@ 00072988 e021
.org 0x7298a
	lsls r1, r1, #3	@ 0007298a c900
.org 0x7298c
	cmp r0, r1	@ 0007298c 8842
.org 0x7298e
	ble.n 0x72992	@ 0007298e 00dd
.org 0x72990
	str r1, [r6, #96]	@ 00072990 3166
.org 0x72992
	adds r0, r6, #0	@ 00072992 301c
.org 0x72994
	adds r0, #115	@ 00072994 7330
.org 0x72996
	ldrb r0, [r0, #0]	@ 00072996 0078
.org 0x72998
	cmp r0, #3	@ 00072998 0328
.org 0x7299a
	bne.n 0x729aa	@ 0007299a 06d1
.org 0x7299c
	cmp r7, #0	@ 0007299c 002f
.org 0x7299e
	beq.n 0x729aa	@ 0007299e 04d0
.org 0x729a0
	ldrb r0, [r6, #14]	@ 000729a0 b07b
