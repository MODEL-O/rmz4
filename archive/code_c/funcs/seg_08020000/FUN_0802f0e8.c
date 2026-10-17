// undefined FUN_0802f0e8(void)
// entry 0x802f0e8


undefined4 FUN_0802f0e8(int param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 in_lr;
  
  iVar3 = 0x3f;
  puVar5 = (ushort *)(param_1 + 0x1d0);
  puVar2 = (undefined2 *)(param_1 + 0x24c);
  do {
    puVar2[1] = *puVar2;
    puVar2 = puVar2 + -1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(byte *)(param_1 + 199) < 4) {
    uVar1 = *(ushort *)(DAT_0802f184 + 4);
    *puVar5 = (ushort)DAT_0802f188 & uVar1;
    puVar5 = (ushort *)(DAT_0802f18c + param_1);
    *(ushort *)(param_1 + 0x250) = (*puVar5 ^ uVar1) & uVar1;
    *puVar5 = uVar1;
  }
  else {
    if (*(char *)(param_1 + 0x254) == '\0') {
      *puVar5 = (ushort)DAT_0802f14c & *DAT_0802f148;
    }
    else {
      *puVar5 = 0;
    }
    puVar4 = (ushort *)(DAT_0802f150 + param_1);
    *(ushort *)(param_1 + 0x250) = (*puVar4 ^ *puVar5) & *puVar5;
    *puVar4 = *puVar5;
  }
  *(undefined1 *)(param_1 + 0x254) = 0;
  return in_lr;
}


