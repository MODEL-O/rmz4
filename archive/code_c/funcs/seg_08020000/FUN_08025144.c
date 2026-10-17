// undefined FUN_08025144(void)
// entry 0x8025144


longlong FUN_08025144(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  uint in_lr;
  
  iVar2 = DAT_08025218;
  iVar1 = DAT_08025188;
  iVar4 = *(int *)(param_1 + 0x20);
  pcVar5 = (char *)(param_1 + 0x17c);
  cVar3 = *pcVar5;
  if (cVar3 == '\0') {
    *(ushort *)(DAT_08025188 + 8) = *(ushort *)(DAT_08025188 + 8) | 1;
    *(byte *)(DAT_0802518c + 4) = *(byte *)(DAT_0802518c + 4) | 8;
    if (*(char *)(iVar1 + 2) != '\0') {
      if (*(char *)(iVar1 + 2) == '\x02') {
        FUN_080275f0(iVar1 + 0x10,*(undefined4 *)(*(int *)(DAT_080251ac + 0x30) + 8));
        *pcVar5 = '\x02';
      }
      goto LAB_0802520e;
    }
    FUN_080275f0(iVar1 + 0x10,*(undefined4 *)(*(int *)(DAT_08025190 + 0x30) + 0x30));
    FUN_0801f63c(2);
    cVar3 = '\x02';
  }
  else if (cVar3 == '\x02') {
    if (DAT_080251d8 < *(int *)(iVar4 + 0x54)) {
      *(byte *)(DAT_080251dc + 1) = *(byte *)(DAT_080251dc + 1) | 2;
    }
    if (*(int *)(iVar4 + 0x54) <= DAT_080251e0) goto LAB_0802520e;
    *(undefined1 *)(DAT_080251dc + 1) = 0;
    cVar3 = '\x03';
  }
  else {
    if ((cVar3 != '\x03') || (*(int *)(iVar4 + 0x54) < 0xd2001)) goto LAB_0802520e;
    FUN_080275f0(DAT_08025218,*(undefined4 *)(*(int *)(DAT_0802521c + 0x30) + 0x34));
    *(ushort *)(iVar2 + -8) = (ushort)DAT_08025220 & *(ushort *)(iVar2 + -8);
    cVar3 = '\x04';
  }
  *pcVar5 = cVar3;
LAB_0802520e:
  return (ulonglong)in_lr << 0x20;
}


