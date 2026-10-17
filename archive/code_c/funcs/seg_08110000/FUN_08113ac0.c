// undefined FUN_08113ac0(void)
// entry 0x8113ac0


undefined4 FUN_08113ac0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  short *psVar6;
  undefined4 in_lr;
  
  FUN_0801f4a4();
  piVar4 = DAT_08113b50;
  puVar3 = DAT_08113b00;
  iVar2 = DAT_08113adc;
  if ((*(byte *)(DAT_08113adc + 4) & 0x40) != 0) {
    FUN_08001354();
    return in_lr;
  }
  if ((*(ushort *)(DAT_08113afc + 8) & 8) == 0) {
    *(char *)(*DAT_08113b50 + 0x42) = *(char *)(*DAT_08113b50 + 0x42) + '\x01';
    if (100 < *(byte *)(*piVar4 + 0x42)) {
      *(byte *)(*piVar4 + 0x42) = 99;
    }
    psVar6 = (short *)(param_1 + DAT_08113b54);
    sVar1 = *psVar6;
    if (sVar1 != 0x12) {
      if ((*(byte *)(iVar2 + 4) & 0x20) == 0) {
        if (sVar1 == 1) {
          *psVar6 = 0x11;
          FUN_0801f134(0x11,7);
        }
        else {
          if (sVar1 == 2) {
            *psVar6 = 0x11;
          }
          else if ((*(byte *)(iVar2 + 6) & 0x20) == 0) {
            *psVar6 = 0x11;
          }
          else if ((*(byte *)(iVar2 + 6) & 0x60) == 0x20) {
            *psVar6 = 0x11;
          }
          else if (sVar1 == 0xb) {
            *psVar6 = 0x11;
          }
          else if (sVar1 == 0xc) {
            *psVar6 = 0x11;
          }
          else if ((*(byte *)(iVar2 + 7) & 1) == 0) {
            *psVar6 = 0x11;
          }
          else {
            if (sVar1 == 0xd) {
              *psVar6 = 0x11;
              FUN_0801f134(0x11,8);
              goto LAB_08113c0e;
            }
            psVar6 = (short *)(param_1 + DAT_08113b54);
            sVar1 = *psVar6;
            if ((sVar1 != 0xe) && (sVar1 != 0xf)) {
              if (sVar1 == 0x10) {
                *psVar6 = 0x12;
                FUN_0801f134(0x12,0);
              }
              else {
                *psVar6 = 0x11;
                FUN_0801f134(0x11,4);
              }
              goto LAB_08113c0e;
            }
            *psVar6 = 0x11;
          }
          FUN_0801f134(0x11,4);
        }
      }
      else {
        *psVar6 = 0x11;
        FUN_0801f134(0x11,6);
      }
LAB_08113c0e:
      FUN_081126ac(param_1,0x300);
      return in_lr;
    }
    uVar5 = 0xb00;
  }
  else if (*(char *)*DAT_08113b00 == '\0') {
    uVar5 = 0x900;
  }
  else {
    if (*(ushort *)((int)DAT_08113b00 + 0x12) < 99) {
      *(ushort *)((int)DAT_08113b00 + 0x12) = *(ushort *)((int)DAT_08113b00 + 0x12) + 1;
    }
    *(char *)*puVar3 = *(char *)*puVar3 + -1;
    uVar5 = 0x300;
  }
  FUN_081126ac(param_1,uVar5);
  return in_lr;
}


