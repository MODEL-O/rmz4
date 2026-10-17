// undefined FUN_0801f018(void)
// entry 0x801f018


undefined8 FUN_0801f018(int *param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = 0;
  uVar3 = *(ushort *)(DAT_0801f03c + 0x1d0) & 0x7f;
  if (uVar3 == 7) {
    uVar6 = 0xd;
  }
  else if (uVar3 == 6) {
    uVar6 = 0x16;
  }
  else if (uVar3 == 4) {
    uVar6 = 0x17;
  }
  else if (uVar3 == 8) {
    uVar6 = 0x19;
  }
  else if (uVar3 == 0x10) {
    uVar6 = 0x1a;
  }
  if (uVar6 < 0x22) {
    uVar3 = *DAT_0801f0b4;
    iVar5 = uVar6 << 3;
    do {
      iVar2 = DAT_0801f0b8;
      if ((uVar3 & 0x7f) == 4) {
        iVar4 = *(int *)(iVar5 + DAT_0801f0b8) + DAT_0801f0bc;
        iVar1 = FUN_08129050(*param_1 + DAT_0801f0bc,0x3c000);
        if ((iVar4 - iVar1) + 0x2000U < 0x4001) {
          iVar2 = *(int *)(iVar5 + iVar2 + 4) - param_1[1];
joined_r0x0801f0ee:
          if (iVar2 + 0x2000U < 0x4001) break;
        }
      }
      else if ((*(int *)(iVar5 + DAT_0801f104) - *param_1) + 0x2000U < 0x4001) {
        iVar2 = *(int *)(iVar5 + DAT_0801f104 + 4) - param_1[1];
        goto joined_r0x0801f0ee;
      }
      iVar5 = iVar5 + 8;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x22);
  }
  if (uVar6 == 0x22) {
    iVar5 = 0;
  }
  else {
    iVar5 = uVar6 * 8 + DAT_0801f108;
  }
  return CONCAT44(in_lr,iVar5);
}


