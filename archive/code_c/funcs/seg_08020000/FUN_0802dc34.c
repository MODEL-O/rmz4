// undefined FUN_0802dc34(void)
// entry 0x802dc34


undefined8 FUN_0802dc34(int param_1,int param_2,int param_3,int *param_4)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  uint local_28;
  uint local_24;
  
  local_28 = 0;
  param_4[1] = 0;
  *param_4 = 0;
  local_24 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar7 = (uint)*(byte *)(param_1 + 0x188 + local_24);
      iVar3 = uVar7 * 0x18;
      iVar4 = iVar3 + DAT_0802dcf0;
      uVar1 = *(ushort *)(iVar4 + 0x1d6);
      uVar6 = (uint)uVar1;
      if (((uVar1 & 0xf) != 0xf) || (uVar6 = DAT_0802dcf4, (uVar1 & 0x8000) != 0)) {
        piVar2 = (int *)(DAT_0802dcf0 + 0x1dc + iVar3);
        puVar5 = (ushort *)(iVar4 + 0x1d8);
        if (((param_2 - *piVar2) + (uint)*puVar5 < (uint)*puVar5 << 1) &&
           ((param_3 - *(int *)(iVar3 + DAT_0802dcf8)) + (uint)*(ushort *)(iVar4 + 0x1da) <
            (uint)*(ushort *)(iVar4 + 0x1da) << 1)) {
          FUN_0802e63c(param_1,uVar7);
          iVar3 = *piVar2;
          if (iVar3 < *(int *)(param_1 + 0x54)) {
            *param_4 = (iVar3 + (uint)*puVar5) - param_2;
          }
          else {
            *param_4 = ((iVar3 - (uint)*puVar5) - param_2) + -1;
          }
          iVar3 = *param_4;
          if (iVar3 != 0) {
            *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
            param_2 = param_2 + iVar3;
            *(undefined1 *)(param_1 + DAT_0802dd50) = 1;
            local_28 = uVar6;
          }
        }
      }
      local_24 = local_24 + 1 & 0xff;
    } while (local_24 < *(byte *)(param_1 + 0x1b8));
  }
  return CONCAT44(in_lr,local_28);
}


