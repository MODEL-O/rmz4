// undefined FUN_0800cc20(void)
// entry 0x800cc20


undefined4 FUN_0800cc20(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  puVar2 = DAT_0800cc5c;
  iVar1 = DAT_0800cc58;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_0800cc5c = (short)DAT_0800cc60;
    puVar2[1] = (short)DAT_0800cc64;
    *(undefined1 *)(iVar1 + DAT_0800cc68) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (DAT_0800cc70 < (uint)(*(int *)(param_1 + 0x34) + DAT_0800cc6c)) {
    if (DAT_0800cc90 < (uint)(*(int *)(param_1 + 0x34) + DAT_0800cc8c)) {
      puVar4 = (undefined4 *)(iVar1 + DAT_0800ccb4);
      uVar3 = 0x280000;
    }
    else {
      puVar4 = (undefined4 *)(iVar1 + DAT_0800cc94);
      uVar3 = 0x37000;
    }
  }
  else {
    puVar4 = (undefined4 *)(iVar1 + DAT_0800cc74);
    uVar3 = 0x1a000;
  }
  *puVar4 = uVar3;
  *(char *)(iVar1 + DAT_0800ccb8) = *(char *)(iVar1 + DAT_0800ccb8) + '\x01';
  return in_lr;
}


