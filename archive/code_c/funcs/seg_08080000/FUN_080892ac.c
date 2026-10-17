// undefined FUN_080892ac(void)
// entry 0x80892ac


undefined4 FUN_080892ac(int param_1,int *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  *(int *)(iVar3 + 0xb4) = *(int *)(*DAT_08089344 + 0x54) - *(int *)(iVar3 + 0x54);
  FUN_08006984(0x39);
  if ((*(uint *)(param_1 + 0x14) & 0x40) != 0) {
    if ((*(uint *)(iVar3 + 0x8c) & 0x200) != 0) {
      *(int *)(iVar3 + 0xb4) = *param_2 - *(int *)(iVar3 + 0x54);
    }
    piVar1 = DAT_08089390;
    if ((((*(char *)(iVar3 + 0xc0) == '\0') &&
         (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 4) == '\x04')) &&
        ((*(byte *)(*(int *)(param_1 + 0xc) + 0x39) & 0x20) != 0)) &&
       (((*(byte *)(iVar4 + 10) ^ *(byte *)(iVar3 + 10)) >> 4 & 1) != 0)) {
      if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
        if (0 < *(int *)(iVar3 + 0x54) - *(int *)(iVar4 + 0x54)) goto LAB_08089352;
      }
      else if (*(int *)(iVar3 + 0x54) - *(int *)(iVar4 + 0x54) < 0) {
LAB_08089352:
        FUN_0803a578(*DAT_08089390,4,1);
        *(char *)(iVar3 + 0xc0) = '\x01';
        *(int *)(iVar3 + 0xb4) = *(int *)(*piVar1 + 0x54) - *(int *)(iVar3 + 0x54);
        *(undefined1 *)(iVar3 + 0xd) = 6;
        *(undefined1 *)(iVar3 + 0xe) = 0;
        if ((*(uint *)(iVar3 + 0x8c) & 0x200) == 0) {
          return in_lr;
        }
        *(undefined2 *)(iVar3 + 0xa4) = 1;
        return in_lr;
      }
    }
  }
  if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
     && (*DAT_080893cc != 0)) {
    uVar2 = FUN_0803a578(*DAT_080893cc,3,4);
    *(undefined1 *)(iVar3 + 0xc1) = uVar2;
  }
  return in_lr;
}


