// undefined FUN_08110288(void)
// entry 0x8110288


undefined4 FUN_08110288(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  char *pcVar4;
  ushort *puVar5;
  undefined4 in_lr;
  
  puVar5 = (ushort *)(param_1 + 0x250);
  uVar1 = *puVar5;
  pcVar4 = (char *)(param_1 + DAT_081102fc);
  if (*pcVar4 == *(char *)(DAT_08110300 + param_1)) {
    iVar2 = (*(ushort *)(param_1 + 0x12) >> 1 & 3) * 4;
    puVar3 = (ushort *)(param_1 + 0x24c);
    uVar1 = *(ushort *)((uint)*puVar3 * 2 + *(int *)(iVar2 + DAT_08110304));
    *(char *)(DAT_08110300 + param_1) = *(char *)(*(int *)(iVar2 + DAT_08110308) + (uint)*puVar3);
    *pcVar4 = '\0';
    *puVar3 = *puVar3 + 1;
  }
  *pcVar4 = *pcVar4 + '\x01';
  puVar3 = DAT_0811030c;
  *DAT_0811030c = uVar1;
  puVar3[2] = uVar1 & ~*puVar5;
  puVar3[3] = 0;
  *puVar5 = uVar1;
  return in_lr;
}


