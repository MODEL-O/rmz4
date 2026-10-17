// undefined FUN_08055398(void)
// entry 0x8055398


undefined4 FUN_08055398(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  puVar5 = (uint *)(param_1 + 0x8c);
  if ((*puVar5 & 1) != 0) {
    FUN_08006984(0x48);
  }
  if ((((*puVar5 & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar1 = (byte)*(ushort *)(DAT_08055400 + 8) & 8, (*(ushort *)(DAT_08055400 + 8) & 8) == 0)) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08055404);
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
    FUN_080591dc(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_08055480:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_08055492;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    iVar3 = FUN_0802adac(10,param_1,DAT_0805544c);
    *(int *)(param_1 + 0x2c) = iVar3;
    if (iVar3 == 0) goto LAB_08055492;
    if (*(byte *)(param_1 + 0xd) < 7) {
                    /* WARNING: Could not recover jumptable at 0x08055448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(PTR_PTR_08055450 + (uint)*(byte *)(param_1 + 0xd) * 4))();
      return uVar4;
    }
    goto LAB_08055480;
  }
  iVar3 = FUN_0802b3e4();
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_08055492:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080554b0));
  FUN_08059740(param_1);
  return in_lr;
}


