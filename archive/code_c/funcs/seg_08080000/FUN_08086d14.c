// undefined FUN_08086d14(void)
// entry 0x8086d14


undefined4 FUN_08086d14(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if ((*(ushort *)(DAT_08086d64 + 0x14) & 1) == 0) {
      iVar3 = *(int *)(param_1 + 0xb8);
      if (iVar3 == 0) {
        iVar3 = FUN_0801fb14(DAT_08086d64 + 0xe8,param_1 + 0x54);
        if (iVar3 != 0) {
          return in_lr;
        }
        uVar1 = FUN_0807f9d8(param_1,7);
        if (*(byte *)(param_1 + 0xb4) <= uVar1) {
          return in_lr;
        }
        local_14 = *(int *)(param_1 + 0x54) + 0x800;
        local_10 = *(int *)(param_1 + 0x58) + 0x800;
        FUN_08085fe4(param_1,&local_14,1,*(undefined1 *)(param_1 + 0x10));
        iVar3 = 0xf0;
      }
      else {
        iVar3 = iVar3 + -1;
      }
      *(int *)(param_1 + 0xb8) = iVar3;
    }
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08086d44);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_08086db8(param_1);
  }
  return in_lr;
}


