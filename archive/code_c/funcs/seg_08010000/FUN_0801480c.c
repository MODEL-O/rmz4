// undefined FUN_0801480c(void)
// entry 0x801480c


undefined4 FUN_0801480c(int param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 in_lr;
  uint local_1c;
  undefined4 local_18;
  
  iVar3 = param_1 >> 0xc;
  iVar6 = param_2 + 0x64000 >> 0xc;
  local_1c = iVar3 + 0x5aU & 0xffff | iVar6 << 0x10;
  local_18 = DAT_08014894;
  puVar7 = (ushort *)(DAT_08014898 + 0x7e0);
  uVar1 = puVar7[iVar6 * (uint)*puVar7 + iVar3 + 2];
  puVar2 = (ushort *)(DAT_08014898 + DAT_0801489c);
  *puVar2 = uVar1;
  if ((1 < (ushort)(uVar1 - 0xd7)) && (uVar1 != 0)) {
    if ((uVar1 & 1) == 0) {
      iVar5 = param_1 + DAT_080148a0 >> 0xc;
      uVar4 = (uint)puVar7[iVar6 * (uint)*puVar7 + iVar5 + 2];
      *puVar2 = puVar7[iVar6 * (uint)*puVar7 + iVar5 + 2];
      if (uVar4 != 0) {
        if (uVar4 < 0xb0) {
          FUN_08007410(iVar5,iVar6,uVar4 * 8 + DAT_080148a4);
        }
        else {
          FUN_08007410(iVar5,iVar6,uVar4 * 8 + DAT_080148c4);
        }
      }
      FUN_0800736c(iVar3,param_2 >> 0xc,&local_1c);
    }
    else {
      iVar5 = param_1 + 0x1000 >> 0xc;
      uVar4 = (uint)puVar7[iVar6 * (uint)*puVar7 + iVar5 + 2];
      *puVar2 = puVar7[iVar6 * (uint)*puVar7 + iVar5 + 2];
      if (uVar4 != 0) {
        if (uVar4 < 0xb0) {
          FUN_08007410(iVar5,iVar6,uVar4 * 8 + DAT_080148f8);
        }
        else {
          FUN_08007410(iVar5,iVar6,uVar4 * 8 + DAT_08014938);
        }
      }
      FUN_0800736c(iVar3,param_2 >> 0xc,&local_1c);
    }
  }
  FUN_08007410(iVar3,param_2 + 0x64000 >> 0xc,DAT_0801493c);
  *(undefined1 *)(DAT_08014940 + DAT_08014944) = 1;
  return in_lr;
}


