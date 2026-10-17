// undefined FUN_080363c8(void)
// entry 0x80363c8


undefined4 FUN_080363c8(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  pbVar4 = (byte *)(param_1 + 0x156);
  puVar2 = (undefined1 *)(DAT_0803642c + param_1);
  *puVar2 = *(undefined1 *)((uint)*pbVar4 + DAT_08036428);
  iVar3 = DAT_08036430;
  FUN_0803a3b0(param_1,*(undefined2 *)((uint)*pbVar4 * 2 + DAT_08036430));
  FUN_0803a3f0(param_1,*(undefined2 *)((uint)*pbVar4 * 2 + iVar3));
  cVar1 = *(char *)(param_1 + 0xfa);
  if (cVar1 == '\x02') {
    cVar1 = FUN_0802ca64(param_1,0);
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + DAT_080364b4) + -1;
      *(char *)(param_1 + DAT_080364b4) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *puVar2 = 0xff;
      *(undefined1 *)(param_1 + DAT_080364b8) = 4;
      iVar3 = 0x102;
    }
    else {
      *puVar2 = 0xff;
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      iVar3 = 0x100;
    }
    *(undefined1 *)(param_1 + iVar3) = 0;
  }
  else {
    if (cVar1 != '\b') {
      if (*(char *)(param_1 + 0xc0) == '\x02') {
        *(char *)(param_1 + 0xc0) = cVar1;
      }
      else {
        *(char *)(param_1 + 0xc1) = cVar1;
      }
    }
    *(undefined1 *)(param_1 + DAT_0803644c) = 2;
    *(undefined1 *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}


