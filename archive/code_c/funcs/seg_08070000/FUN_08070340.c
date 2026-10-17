// undefined FUN_08070340(void)
// entry 0x8070340


undefined4 FUN_08070340(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xb9) = 0;
  puVar5 = (uint *)(param_1 + 0x8c);
  if ((*puVar5 & 1) != 0) {
    FUN_08006984(0x46);
  }
  FUN_080025d8(0x7a);
  if ((((*puVar5 & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar1 = (byte)*(ushort *)(DAT_080703b4 + 8) & 8, (*(ushort *)(DAT_080703b4 + 8) & 8) == 0)) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080703b8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    if ((*puVar5 & 0x10000) == 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
    }
    FUN_080732d4(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_080703ea:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_080703fc;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar3 = FUN_0802adac(0x17,param_1,DAT_08070414);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    goto LAB_080703ea;
  }
  iVar4 = FUN_0802b3e4();
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_080703fc:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08070418));
  return in_lr;
}


