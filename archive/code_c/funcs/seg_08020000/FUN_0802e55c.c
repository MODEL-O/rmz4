// undefined FUN_0802e55c(void)
// entry 0x802e55c


undefined8 FUN_0802e55c(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar1 = DAT_0802e5f8;
  uVar8 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      iVar5 = (uint)*(byte *)(param_1 + 0x188 + uVar8) * 0x18;
      piVar7 = (int *)(iVar5 + iVar1 + 0x1dc);
      iVar6 = iVar5 + iVar1;
      uVar3 = (uint)*(ushort *)(iVar6 + 0x1d8);
      if ((((param_2 - *piVar7) + uVar3 < uVar3 << 1) &&
          ((param_3 - *(int *)(iVar5 + DAT_0802e5fc)) + (uint)*(ushort *)(iVar6 + 0x1da) <
           (uint)*(ushort *)(iVar6 + 0x1da) << 1)) &&
         (cVar2 = FUN_0802f084(*(ushort *)(iVar6 + 0x1d6) & DAT_0802e600,0), cVar2 != '\0')) {
        iVar5 = *piVar7;
        iVar6 = (iVar5 + (uint)(*(ushort *)(iVar6 + 0x1d8) >> 1)) - param_2;
        if (iVar5 < param_2) {
          if (iVar6 <= DAT_0802e604) {
            uVar4 = 1;
            goto LAB_0802e62c;
          }
        }
        else if (DAT_0802e614 < iVar6) {
          uVar4 = 2;
          goto LAB_0802e62c;
        }
      }
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < *(byte *)(param_1 + 0x1b8));
  }
  uVar4 = 0;
LAB_0802e62c:
  return CONCAT44(in_lr,uVar4);
}


