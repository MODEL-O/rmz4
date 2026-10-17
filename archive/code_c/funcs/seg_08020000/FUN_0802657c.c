// undefined FUN_0802657c(void)
// entry 0x802657c


longlong FUN_0802657c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  uint in_lr;
  
  iVar3 = DAT_08026694;
  iVar2 = DAT_080265c0;
  iVar5 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    *(ushort *)(DAT_080265c0 + 8) = *(ushort *)(DAT_080265c0 + 8) | 1;
    *(byte *)(DAT_080265c4 + 4) = *(byte *)(DAT_080265c4 + 4) | 8;
    cVar1 = *(char *)(iVar2 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_080265c8 + 0x3c) + 0x24));
      FUN_0801f63c(2);
      uVar4 = 2;
    }
    else {
      if (cVar1 == '\x02') {
        FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_080265e4 + 0x3c) + 8));
        *(char *)(param_1 + 0x17c) = '\x02';
        goto LAB_08026688;
      }
      if (cVar1 != '\x03') goto LAB_08026688;
      FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_08026600 + 0x3c) + 0xc));
      uVar4 = 4;
    }
  }
  else if ((cVar1 == '\x02') && (0xfe000 < *(int *)(iVar5 + 0x54))) {
    uVar4 = 3;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x03') {
      FUN_0801f63c(3);
      uVar4 = 4;
    }
    else if (cVar1 == '\x04') {
      if (DAT_08026654 < *(int *)(iVar5 + 0x54)) {
        *(byte *)(DAT_08026658 + 1) = *(byte *)(DAT_08026658 + 1) | 2;
      }
      if (*(int *)(iVar5 + 0x54) <= DAT_0802665c) goto LAB_08026688;
      *(undefined1 *)(DAT_08026658 + 1) = 0;
      uVar4 = 5;
    }
    else {
      if ((cVar1 != '\x05') || (*(int *)(iVar5 + 0x58) <= DAT_08026690)) goto LAB_08026688;
      FUN_080275f0(DAT_08026694,*(undefined4 *)(*(int *)(DAT_08026698 + 0x3c) + 0x28));
      *(ushort *)(iVar3 + -8) = (ushort)DAT_0802669c & *(ushort *)(iVar3 + -8);
      uVar4 = 7;
    }
  }
  *(undefined1 *)(param_1 + 0x17c) = uVar4;
LAB_08026688:
  return (ulonglong)in_lr << 0x20;
}


