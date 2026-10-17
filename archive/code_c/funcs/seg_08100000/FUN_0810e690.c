// undefined FUN_0810e690(void)
// entry 0x810e690


/* WARNING: Removing unreachable block (ram,0x0810e6e8) */
/* WARNING: Removing unreachable block (ram,0x0810e6f0) */
/* WARNING: Removing unreachable block (ram,0x0810e6f6) */
/* WARNING: Removing unreachable block (ram,0x0810e6fa) */
/* WARNING: Removing unreachable block (ram,0x0810e700) */
/* WARNING: Removing unreachable block (ram,0x0810e6ee) */
/* WARNING: Removing unreachable block (ram,0x0810e704) */
/* WARNING: Removing unreachable block (ram,0x0810e70a) */

undefined4 FUN_0810e690(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  undefined4 in_lr;
  
  pbVar2 = *(byte **)(param_1 + 0x1c);
  bVar4 = 0xff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  bVar1 = *pbVar2;
  while (bVar1 < 0xfd) {
    if (bVar1 == 0xf3) {
      pbVar2 = pbVar2 + 1;
      bVar1 = *pbVar2;
      *(byte *)(param_1 + 4) = bVar1 >> 1;
      *(byte *)(param_1 + 6) = bVar1 & 1;
    }
    else if (bVar1 < 0xf1) {
      pbVar2 = pbVar2 + 1;
    }
    else if (bVar1 == 0xf6) {
      pbVar2 = pbVar2 + 1;
      bVar4 = *pbVar2;
    }
    else if (bVar1 == 0xfa) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else if (bVar1 == 0xfb) {
      *(undefined1 *)(param_1 + 5) = 0xd;
    }
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  if (*pbVar2 < 0xfe) {
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = (byte *)0x0;
  }
  *(byte **)(param_1 + 0x20) = pbVar2;
  if (bVar4 != 0xff) {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) >> 4 | 0x10;
    for (pcVar3 = *(char **)(param_1 + 0x18); *pcVar3 != -1; pcVar3 = pcVar3 + 1) {
      if ((*pcVar3 == -0xc) && (pcVar3[1] == bVar4)) {
        *(char **)(param_1 + 0x24) = pcVar3 + 2;
        return in_lr;
      }
    }
  }
  return in_lr;
}


