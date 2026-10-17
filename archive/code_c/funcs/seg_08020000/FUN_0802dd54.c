// undefined FUN_0802dd54(void)
// entry 0x802dd54


undefined8 FUN_0802dd54(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  uint local_24;
  
  local_24 = 0;
  param_4[1] = 0;
  *param_4 = 0;
  uVar8 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar2 = (uint)*(byte *)(param_1 + 0x188 + uVar8);
      iVar3 = uVar2 * 0x18;
      iVar4 = iVar3 + DAT_0802de10;
      uVar1 = *(ushort *)(iVar4 + 0x1d6);
      uVar7 = (uint)uVar1;
      if ((((uVar1 & 0xf) != 0xf) || (uVar7 = DAT_0802de14, (uVar1 & 0x8000) != 0)) &&
         ((param_2 - *(int *)(iVar3 + DAT_0802de10 + 0x1dc)) + (uint)*(ushort *)(iVar4 + 0x1d8) <
          (uint)*(ushort *)(iVar4 + 0x1d8) << 1)) {
        piVar6 = (int *)(iVar3 + DAT_0802de18);
        puVar5 = (ushort *)(iVar4 + 0x1da);
        if ((param_3 - *piVar6) + (uint)*puVar5 < (uint)*puVar5 << 1) {
          FUN_0802e63c(param_1,uVar2);
          iVar3 = *piVar6;
          if (iVar3 < param_3) {
            if (param_3 < *(int *)(param_1 + 0x58)) {
              param_4[1] = (iVar3 + (uint)*puVar5) - param_3;
            }
            else {
              param_4[1] = ((iVar3 - (uint)*puVar5) - param_3) + -1;
            }
          }
          else {
            param_4[1] = ((iVar3 - (uint)*puVar5) - param_3) + -1;
          }
          iVar3 = param_4[1];
          if (iVar3 != 0) {
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
            param_3 = param_3 + iVar3;
            *(undefined1 *)(DAT_0802de78 + param_1) = 1;
            local_24 = uVar7;
          }
        }
      }
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < *(byte *)(param_1 + 0x1b8));
  }
  return CONCAT44(in_lr,local_24);
}


