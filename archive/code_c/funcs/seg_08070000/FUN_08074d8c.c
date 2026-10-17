// undefined FUN_08074d8c(void)
// entry 0x8074d8c


undefined4 FUN_08074d8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined4 in_lr;
  
  FUN_08001d30(DAT_08074ec0,
               ((uint)*(ushort *)(DAT_08074ec4 + 0x12a) - (uint)(*(ushort *)(DAT_08074ec0 + 6) >> 6)
               ) * 0x20 + 0x10000);
  FUN_08002208(DAT_08074ec8,
               ((uint)*(ushort *)(DAT_08074ecc + 0x12a) - (uint)*(byte *)(DAT_08074ec8 + 7)) * 0x20
               + 0x200);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  FUN_0801cf00(param_1,DAT_08074ed0);
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_080503cc(param_1,DAT_08074ed4,0x40);
  *(undefined4 *)(param_1 + 0x98) = DAT_08074ed8;
  uVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar1 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  iVar2 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 200) = iVar2;
  *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xc4) + (iVar2 - *(int *)(param_1 + 0xc4) >> 1);
  *(undefined1 *)(param_1 + 0xda) = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xde) = 0;
  uVar4 = 0;
  if (((*(byte *)(DAT_08074edc + DAT_08074ee0) & 0x10) != 0) &&
     ((*(byte *)(DAT_08074ee4 + 4) & 4) == 0)) {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0xdd) = uVar4;
  if (*(char *)(param_1 + 0xdd) != '\0') {
    *(char *)(param_1 + 0xdd) = '\x01';
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08074ee8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_08074eec(param_1);
  return in_lr;
}


