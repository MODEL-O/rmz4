// undefined FUN_08025528(void)
// entry 0x8025528


longlong FUN_08025528(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  uint in_lr;
  
  iVar3 = DAT_08025650;
  iVar2 = DAT_0802556c;
  iVar5 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    *(ushort *)(DAT_0802556c + 8) = *(ushort *)(DAT_0802556c + 8) | 1;
    *(byte *)(DAT_08025570 + 4) = *(byte *)(DAT_08025570 + 4) | 8;
    cVar1 = *(char *)(iVar2 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_08025574 + 0x34) + 0x24));
      FUN_0801f63c(2);
      uVar4 = 2;
    }
    else {
      if (cVar1 == '\x02') {
        FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_08025590 + 0x34) + 8));
        *(char *)(param_1 + 0x17c) = '\x02';
        goto LAB_08025644;
      }
      if (cVar1 != '\x03') goto LAB_08025644;
      FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_080255ac + 0x34) + 0xc));
      uVar4 = 4;
    }
  }
  else if ((cVar1 == '\x02') && (0xa4000 < *(int *)(iVar5 + 0x54))) {
    uVar4 = 3;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x03') {
      FUN_0801f63c(3);
      uVar4 = 4;
    }
    else if (cVar1 == '\x04') {
      if (DAT_0802560c < *(int *)(iVar5 + 0x54)) {
        *(byte *)(DAT_08025610 + 1) = *(byte *)(DAT_08025610 + 1) | 2;
      }
      if (*(int *)(iVar5 + 0x54) <= DAT_08025614) goto LAB_08025644;
      *(undefined1 *)(DAT_08025610 + 1) = 0;
      *(byte *)(DAT_08025618 + 4) = *(byte *)(DAT_08025618 + 4) & 0xf7;
      uVar4 = 5;
    }
    else {
      if ((cVar1 != '\x05') || (*(int *)(iVar5 + 0x54) <= DAT_0802564c)) goto LAB_08025644;
      FUN_080275f0(DAT_08025650,*(undefined4 *)(*(int *)(DAT_08025654 + 0x34) + 0x28));
      *(ushort *)(iVar3 + -8) = (ushort)DAT_08025658 & *(ushort *)(iVar3 + -8);
      uVar4 = 7;
    }
  }
  *(undefined1 *)(param_1 + 0x17c) = uVar4;
LAB_08025644:
  return (ulonglong)in_lr << 0x20;
}


