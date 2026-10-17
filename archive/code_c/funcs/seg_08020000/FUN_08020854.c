// undefined FUN_08020854(void)
// entry 0x8020854


longlong FUN_08020854(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint in_lr;
  
  iVar3 = DAT_08020974;
  iVar2 = DAT_08020898;
  iVar4 = *(int *)(param_1 + 0x20);
  pcVar5 = (char *)(param_1 + 0x17c);
  if (*pcVar5 == '\0') {
    *(ushort *)(DAT_08020898 + 8) = *(ushort *)(DAT_08020898 + 8) | 1;
    *(byte *)(DAT_0802089c + 4) = *(byte *)(DAT_0802089c + 4) & 0xf7;
    cVar1 = *(char *)(iVar2 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_080208a0 + 8) + 0x24));
      FUN_0801f63c(1);
      *pcVar5 = '\x01';
    }
    else if (cVar1 == '\x01') {
      FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_080208bc + 8) + 8));
      *pcVar5 = '\x01';
    }
    else if (cVar1 == '\x02') {
      FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_080208d8 + 8) + 0xc));
      *pcVar5 = '\x02';
    }
  }
  else if ((*pcVar5 == '\x01') && (DAT_080208fc < *(int *)(iVar4 + 0x54))) {
    *DAT_08020900 = 0x10e000;
    FUN_0801f63c(2);
    *pcVar5 = '\x02';
  }
  else {
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x02') {
      if (DAT_08020938 < *(int *)(iVar4 + 0x54)) {
        *(byte *)(DAT_0802093c + 1) = *(byte *)(DAT_0802093c + 1) | 2;
      }
      if (DAT_08020940 < *(int *)(iVar4 + 0x54)) {
        *(undefined1 *)(DAT_0802093c + 1) = 0;
        *(char *)(param_1 + 0x17c) = '\x03';
      }
    }
    else if ((cVar1 == '\x03') && (DAT_08020970 < *(int *)(iVar4 + 0x54))) {
      FUN_080275f0(DAT_08020974,*(undefined4 *)(*(int *)(DAT_08020978 + 8) + 0x28));
      *(ushort *)(iVar3 + -8) = (ushort)DAT_0802097c & *(ushort *)(iVar3 + -8);
    }
  }
  return (ulonglong)in_lr << 0x20;
}


