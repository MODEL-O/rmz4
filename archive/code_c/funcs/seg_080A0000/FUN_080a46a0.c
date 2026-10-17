// undefined FUN_080a46a0(void)
// entry 0x80a46a0


undefined4 FUN_080a46a0(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  puVar5 = (uint *)(param_1 + 0x8c);
  if (((((*puVar5 & 0x200) == 0) &&
       (iVar2 = *(int *)(param_1 + 0xb4) + -1, *(int *)(param_1 + 0xb4) = iVar2, iVar2 != 0)) &&
      (sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
      sVar1 == 0)) && ((*puVar5 & 4) == 0)) {
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    uVar4 = FUN_0801fb14(DAT_080a4750,param_1 + 0x54);
    if (0x2000 < uVar4) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar5 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a4754);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
    }
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a46f4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080a4758(param_1);
  }
  return in_lr;
}


