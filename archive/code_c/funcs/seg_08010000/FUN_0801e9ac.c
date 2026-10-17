// undefined FUN_0801e9ac(void)
// entry 0x801e9ac


undefined4 FUN_0801e9ac(undefined1 param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 in_lr;
  
  puVar1 = DAT_0801ea20;
  *DAT_0801ea20 = param_2;
  *(undefined1 *)(puVar1 + 1) = param_1;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 6) = 0;
  *(undefined1 *)((int)puVar1 + 7) = 0x14;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 3) = 0;
  *(undefined2 *)((int)puVar1 + 0xe) = 0;
  *(undefined2 *)((int)puVar1 + 0x12) = 0;
  iVar2 = DAT_0801ea24;
  if (*(short *)(DAT_0801ea24 + 2) == 3) {
    *param_2 = 9;
  }
  *(char *)(puVar1 + 4) =
       *(char *)(DAT_0801ea2c + iVar2) + *(char *)(iVar2 + 0x12a) + *(char *)(DAT_0801ea28 + iVar2);
  cVar3 = *(char *)(iVar2 + 300);
  if (*(char *)(iVar2 + 0xfd) == '\x12') {
    cVar3 = cVar3 + '\x01';
  }
  *(char *)((int)puVar1 + 0x11) = cVar3;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined1 *)((int)puVar1 + 0x17) = 0;
  *(undefined1 *)((int)puVar1 + 0x16) = 0;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 0x19) = 0;
  *(undefined1 *)((int)puVar1 + 0x1a) = 0;
  *(undefined2 *)(puVar1 + 8) = 0;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0;
  *(undefined2 *)(puVar1 + 7) = 0;
  return in_lr;
}


