// undefined FUN_08024a70(void)
// entry 0x8024a70


longlong FUN_08024a70(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  ushort uVar11;
  char *pcVar12;
  uint in_lr;
  
  iVar7 = DAT_08024cdc;
  pbVar6 = DAT_08024c88;
  iVar3 = DAT_08024c84;
  pbVar5 = DAT_08024bd0;
  pbVar4 = DAT_08024b94;
  iVar2 = DAT_08024ac8;
  pcVar12 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar12;
  if (cVar1 == '\0') {
    uVar11 = *(ushort *)(DAT_08024ac8 + 8) | 1;
    *(ushort *)(DAT_08024ac8 + 8) = uVar11;
    iVar3 = DAT_08024acc;
    *(byte *)(DAT_08024acc + 4) = *(byte *)(DAT_08024acc + 4) | 8;
    cVar1 = *(char *)(iVar2 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar2 + 0x10,**(undefined4 **)(DAT_08024ad0 + 0x2c));
      FUN_0801f63c(1);
      *(undefined1 *)(iVar3 + 0xb) = 0;
      *(undefined1 *)(iVar3 + 0xc) = 0;
      *(byte *)(iVar3 + 0xd) = *(byte *)(iVar3 + 0xd) & 0xfc;
      *pcVar12 = '\x01';
      goto LAB_08024cc6;
    }
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        uVar10 = *(undefined4 *)(*(int *)(DAT_08024b04 + 0x2c) + 8);
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 == '\x04') {
            FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_08024b40 + 0x2c) + 0x18));
            FUN_0801f63c(3);
            uVar8 = 7;
          }
          else {
            if (cVar1 != '\x05') goto LAB_08024cc6;
            *(ushort *)(iVar2 + 8) = uVar11 & (ushort)DAT_08024b54;
LAB_08024cc2:
            uVar8 = 9;
          }
          goto LAB_08024cc4;
        }
        uVar10 = *(undefined4 *)(*(int *)(DAT_08024b20 + 0x2c) + 0x10);
      }
      FUN_080275f0(iVar2 + 0x10,uVar10);
      *pcVar12 = cVar1;
      goto LAB_08024cc6;
    }
    FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_08024af0 + 0x2c) + 4));
    FUN_0801f63c(2);
    uVar8 = 2;
  }
  else if (cVar1 == '\x01') {
    FUN_0801f63c(2);
    uVar8 = 2;
  }
  else if ((cVar1 == '\x02') && (DAT_08024b90 < *(int *)(*(int *)(param_1 + 0x20) + 0x54))) {
    DAT_08024b94[1] = DAT_08024b94[1] | 2;
    *pbVar4 = *pbVar4 | 0x80;
    FUN_0801f63c(4);
    uVar8 = 4;
  }
  else {
    if ((*(char *)(param_1 + 0x17c) == '\x03') &&
       (DAT_08024bcc < *(int *)(*(int *)(param_1 + 0x20) + 0x54))) {
      DAT_08024bd0[1] = DAT_08024bd0[1] | 2;
      *pbVar5 = *pbVar5 | 0x80;
      FUN_0801f63c(4);
      *(char *)(param_1 + 0x17c) = '\x05';
      goto LAB_08024cc6;
    }
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x04') {
      *(undefined1 *)(DAT_08024bf8 + 1) = 0;
      FUN_080275f0(DAT_08024bfc,*(undefined4 *)(*(int *)(DAT_08024c00 + 0x2c) + 0xc));
      uVar8 = 6;
    }
    else if (cVar1 == '\x05') {
      *(undefined1 *)(DAT_08024c20 + 1) = 0;
      FUN_080275f0(DAT_08024c24,*(undefined4 *)(*(int *)(DAT_08024c28 + 0x2c) + 0x14));
      uVar8 = 6;
    }
    else if (cVar1 == '\x06') {
      FUN_0801f63c(3);
      uVar8 = 7;
    }
    else {
      if ((cVar1 != '\a') || ((*(ushort *)(DAT_08024c84 + 8) & 0x10) == 0)) {
        if (*(char *)(param_1 + 0x17c) != '\b') goto LAB_08024cc6;
        FUN_080275f0(DAT_08024cdc,*(undefined4 *)(*(int *)(DAT_08024ce0 + 0x2c) + 0x30));
        *(ushort *)(iVar7 + -8) = (*(ushort *)(iVar7 + -8) | 4) & (ushort)DAT_08024ce4;
        FUN_0801f63c(5);
        goto LAB_08024cc2;
      }
      *DAT_08024c88 = *DAT_08024c88 | 0x80;
      pbVar6[1] = pbVar6[1] | 2;
      FUN_080275f0(iVar3 + 0x10,*(undefined4 *)(*(int *)(DAT_08024c8c + 0x2c) + 0x1c));
      uVar11 = (ushort)DAT_08024c90;
      *(byte *)(iVar3 + 0x12) = *(byte *)(iVar3 + 0x12) & 0xfd;
      *(ushort *)(iVar3 + 8) = uVar11 & *(ushort *)(iVar3 + 8) | 1;
      uVar8 = 8;
    }
  }
LAB_08024cc4:
  *(undefined1 *)(param_1 + 0x17c) = uVar8;
LAB_08024cc6:
  if ((*(byte *)(DAT_08024ce8 + 0xd) & 2) == 0) {
    puVar9 = (undefined4 *)(DAT_08024cec + DAT_08024cf0);
    uVar10 = DAT_08024cf4;
  }
  else {
    puVar9 = (undefined4 *)(DAT_08024d0c + DAT_08024d10);
    uVar10 = 0x3c0000;
  }
  *puVar9 = uVar10;
  return (ulonglong)in_lr << 0x20;
}


