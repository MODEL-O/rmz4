// undefined FUN_0800f14c(void)
// entry 0x800f14c


void FUN_0800f14c(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  iVar2 = FUN_08129050(*(int *)((*(int *)0x0202dbf0) + 0x54) + 0xffff1000,0x3c000);
  puVar1 = 0x02000a40;
  if (*(char *)(param_1 + 0xe) == '\0') {
    (*(undefined2 *)0x02000a40) = (short)0x00003b44;
    puVar1[1] = (short)0x00000c04;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (iVar2 + 0xf000 < 0x20001) {
    puVar3 = (undefined4 *)(0x02000ab0 + 0x0002c00c);
    uVar4 = 0x280000;
  }
  else {
    puVar3 = (undefined4 *)(0x02000ab0 + 0x0002c00c);
    uVar4 = 0xd7000;
  }
  *puVar3 = uVar4;
  return;
}


