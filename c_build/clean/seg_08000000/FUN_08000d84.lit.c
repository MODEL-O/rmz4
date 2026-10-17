// undefined FUN_08000d84(void)
// entry 0x8000d84


void FUN_08000d84(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  iVar3 = 0x03001590;
  uVar2 = (*(int *)0x04000006);
  bVar1 = *(byte *)(0x03001590 + 0x00000167);
  if ((bVar1 & 2) == 0) {
    *(byte *)(0x03001590 + 0x00000167) = bVar1 | 2;
    if (uVar2 == 0) {
      *(int *)(iVar3 + 0x160) = *(int *)(iVar3 + 0x160) + 1;
    }
    if ((uVar2 == *(byte *)(iVar3 + 0x166)) && (*(int *)(iVar3 + 0x15c) != 0)) {
      FUN_08128f7c();
    }
    iVar3 = 0x03001590;
    if (uVar2 < *(byte *)(0x03001590 + 0x166)) {
      (*(int *)0x04000005) = *(byte *)(0x03001590 + 0x166);
    }
    else {
      (*(int *)0x04000005) = 0;
    }
    *(byte *)(iVar3 + 0x00000167) = *(byte *)(iVar3 + 0x00000167) ^ 2;
  }
  return;
}


